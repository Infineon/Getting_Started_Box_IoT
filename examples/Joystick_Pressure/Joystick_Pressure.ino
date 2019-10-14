#include <Tlv493d.h>
#include <Dps310.h>
#include <WiFi.h>
#include <WebServer.h>
#include <DNSServer.h>

#include "index.h"  //Web page header file

#define PRESSURE_INTERVAL 100 //interval in ms to update pressure-sensor values

//Network Configuration
const char* ssid = "myIoT";
const char* password = "ifxIoT2019";

//Hosting Website on webserver
WebServer server(80); //HTTP-Protocol on port 80
String host;

//Sensors
Tlv493d Tlv493dMagnetic3DSensor = Tlv493d();
double joy_x, joy_y;
Dps310 Dps310PressureSensor = Dps310();
int32_t lastTemp = 0, lastPress = 0;
unsigned long timer;  //timer for pressure measurement

//Handles request where the main page is called
void handleRoot() {
  String s = MAIN_page; //Read HTML contents
  server.send(200, "text/html", s); //Send web page as response
}

//Handles requests to the sub-page "sensors" -> send values in JSON-format as response
void handleSensors() {
  server.send(200, "application/json", "{ \"press\": " + String(lastPress) + ", \"temp\": " + String(lastTemp) + ", \"x\": " + String(joy_x) + ", \"y\": " + String(joy_y) + ", \"time\": " + String(millis()) + " }"); //Send temp value only to client ajax request

  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));  //toggle LED when values are updated
}

void setup()
{
  Serial.begin(115200);
  //Sensor
  Tlv493dMagnetic3DSensor.begin();
  Dps310PressureSensor.begin(Wire);
  Dps310PressureSensor.startMeasureBothCont(4, 2, 4, 2);  //2^4 = 16 results per second, oversampling of 2^2 internal measurements per result

  //Setting up Wifi (AccessPoint)
  Serial.println("Setting up WIFI\nSSID: " + String(ssid) + "\nPassword: " + String(password));
  WiFi.softAP(ssid, password);

  host = WiFi.softAPIP().toString();
  Serial.println("Generated IP-Adress of server " + host);
  Serial.println("Visit http://" + host + "/ in your browser");

  pinMode(LED_BUILTIN, OUTPUT);

  //Setting up Webserver
  server.on("/", handleRoot);      //This is the main page
  server.on("/sensors", handleSensors); //This is the sub-page for getting sensors in JSON-format

  server.begin(); //Starting server
}

void loop() {
  //Read sensor values via I2C
  Tlv493dMagnetic3DSensor.updateData();
  updatePressureTemp();
  /*  Calculate Joystick-position:
       - Y-direction of joystick is X-direction of sensor and vice versa
       - dividing X and Y each by the total magnetic field (total = sqrt(x^2 + y^2 + z^2)
         => this results in normalized X and Y values
       - for easier post-processing on Website: Map sensor-values to range of [0 to 1]. Multiplying with Box-size then gives the position of the dot inside the box.
         Current range is [-1 to 1] => value+1 gives range of [0 to 2] => (value+1)/2 gives desired range of [0 to 1]
  */
  joy_y = ((Tlv493dMagnetic3DSensor.getX() / Tlv493dMagnetic3DSensor.getAmount()) + 1.0) / 2.0;
  joy_x = ((Tlv493dMagnetic3DSensor.getY() / Tlv493dMagnetic3DSensor.getAmount()) + 1.0) / 2.0;

  //if Client is connected: send response
  server.handleClient();

}

void updatePressureTemp()
{
  if (millis() - timer >= PRESSURE_INTERVAL)
  {
    unsigned char pressureCount = 20;
    int32_t pressure[pressureCount];
    unsigned char temperatureCount = 20;
    int32_t temperature[temperatureCount];
    int16_t ret = Dps310PressureSensor.getContResults(temperature, temperatureCount, pressure, pressureCount);

    timer = millis();

    if (temperatureCount)
      lastTemp = temperature[temperatureCount - 1];
    if (pressureCount)
      lastPress = pressure[pressureCount - 1];

  }
}
