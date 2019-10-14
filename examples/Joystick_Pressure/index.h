const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
<style>
/*Style of card with DPS310 values*/
.card{
     width: 50vmin;
     min-height: 100px;
     background: #E30034;
     padding: 30px;
     box-sizing: border-box;
     color: #FFF;
     margin-left:25vmin;
     box-shadow: 0px 2px 18px -4px rgba(0,0,0,0.75);
}
/*Style of box with Joystick visualisation*/
.box {
      position: relative;
      width: 50vmin;
      margin-left: 25vmin;
      padding: 10px;
      border-radius: 50%;
      box-shadow: 0 2px 18px -4px rgba(0,0,0,.75);
    }
/*Style of Joystick-point*/
.point {
      position: relative;
      width: 5%;
      height: 5%;
      margin-left: -10px;
      margin-top: -10px;
      left: 100%;
      top: 50%;
      background: #005DA9;
      border-radius: 50%;
      box-shadow: 0 2px 18px -4px rgba(0,0,0,.75);
    }
/*Style of text next to Joystick-point*/
.coord {
      margin-left: 120%;
  }
</style>
<body>

<div class="card">                        <!--Card containing DPS310-values-->
  <h4>DPS310 values</h4><br>
  <h1>Pressure: <span id="Press">0</span> Pascal</h1><br>
  <h1>Temp: <span id="Temp">0</span> &#x2103</h1><br>
</div>
<h6>Time: <span id="Time">0</span></h6>   <!--Time since startup of ESP32-->
<h2>TLV493D Joystick:</h2>
<div class="box" id="Box">                <!--Box containing point-->
  <div class="point" id="Point">
    <div class="coord">(<span id="Joy_x">0</span>/<span id="Joy_y">0</span>)</div>
  </div>
</div>
<script>
 //Scaling height of point-box to the same size as width
 var box = document.getElementById("Box");
 box.style.height = box.clientWidth + 'px';

 //get data once for init
 getData();
setInterval(function() {
  // Call a function repetatively
  getData();
}, 200); //200mSeconds update rate

//This function connects to http://[HOST_IP]/sensors in the background and grabs the data (which come in JSON-format)
function getData() {
  var xhttp = new XMLHttpRequest();
  xhttp.open("GET", "sensors", true); //open connection in the background
  
  xhttp.onload = function() {         //When site is loaded (this is called later after the request has been sent, but here the function is defined)
    if (this.readyState == 4 && this.status == 200) { //When site fully loaded and everything is ok
      if(xhttp.responseText){
        var data = JSON.parse(xhttp.responseText);  //Parse data from site out of JSON-format
        //set values in card to values received from Joystick (update)
        document.getElementById("Press").innerText = data.press; 
        document.getElementById("Temp").innerText = data.temp;
        document.getElementById("Time").innerText = data.time;
        document.getElementById("Joy_x").innerText = Math.round((data.x * 2 - 1)*100)/100;
        document.getElementById("Joy_y").innerText = Math.round((data.y * 2 - 1)*-100)/100;

        //set joystick-location:
        var box = document.getElementById("Box");
        var point = document.getElementById("Point");
        //values x,y of joystick have a range of [0 to 1]. Multiplying this to the size of the box results in new position values for the point
        point.style.left = data.x * (box.clientWidth-point.clientWidth) + 'px';
        point.style.top = data.y * (box.clientHeight-point.clientHeight) + 'px';        
      }
      else  //if anything went wrong: Show "?" for all values
      {
        document.getElementById("Press").innerText = "?";
        document.getElementById("Temp").innerText = "?";
        document.getElementById("Time").innerText = "?";
        document.getElementById("Joy_x").innerText = "?";
        document.getElementById("Joy_y").innerText = "?";
      }
    }
  };
  xhttp.send(); //send request to site (when successful -> function above gets called)
}
</script>
</body>
</html>
)=====";
