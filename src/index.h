

#ifndef INDEX_H_
#define INDEX_H_

#include "Arduino.h"

const char index_html[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
<head>
    <title>MusicClock</title>
    <meta name="generator" content="Bluefish 2.2.10" >
    <meta name="author" content="Wolle" >
    <meta name="date" content="2019-10-11T20:07:54+0200" >
    <meta name="copyright" content="schreibfaul1">
    <meta name="keywords" content="">
    <meta name="description" content="index">
    <meta name="ROBOTS" content="NOINDEX, NOFOLLOW">
    <meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <meta http-equiv="content-type" content="application/xhtml+xml; charset=UTF-8">
    <meta http-equiv="content-style-type" content="text/css">
    <meta http-equiv="expires" content="0">

    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/jqueryui/1.12.1/jquery-ui.min.css" />
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/jsgrid/1.5.3/jsgrid.min.css" />
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/jsgrid/1.5.3/jsgrid-theme.min.css" />
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/toastr.js/latest/css/toastr.css" />

<!--   <link rel="stylesheet" href="SD/css/jquery-ui.css" />     -->
<!--   <link rel="stylesheet" href="SD/css/jsgrid.css" />        -->
<!--   <link rel="stylesheet" href="SD/css//jsgrid-theme.css" /> -->

    <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/jqueryui/1.12.1/jquery-ui.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/jsgrid/1.5.3/jsgrid.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/xlsx/0.17.0/xlsx.full.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/FileSaver.js/1.3.8/FileSaver.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/toastr.js/latest/toastr.min.js"></script>

<!--  <script src="SD/js/jquery.js"></script>    --->
<!--  <script src="SD/js/jquery-ui.js"></script> --->
<!--  <script src="SD/js/jsgrid.js"></script>    --->
<!--  <script src="SD/js/xlsx.js"></script>      --->
<!--  <script src="SD/js/FileSaver.js"></script> --->


    <style type="text/css">           /* optimized with csstidy */
        html {  /* This is the groundplane */
            font-family : sans-serif;
            height : 100%;
            font-size: 16px;
            color : DarkSlateGray;
            background-color : navy;
            margin : 0;
            padding : 0;
        }
        #dialog {
            display: none;
        }
        #content {
            min-height : 540px;
            min-width : 725px;
            overflow : hidden;
            background-color : lightskyblue;
            margin : 0;
            padding : 5px;
        }
        #tab-content1 {
            font-size: 15px;
            display : block;
            padding : 5px 0;
            max-width: 100%;
            height: 440px;
        }
        #tab-content2 {
            display : none;
            margin : 20px;
        }
        #tab-content3 {
            display : none;
            margin : 20px;
        }
        #tab-content4 {
            display : none;
            margin : 20px;
        }
        #tab-content5 {
            display : none;
            margin : 20px;
        }
        .button {
            width : 120px;
            height : 70px;
            background-color : #128F76;
            border : none;
            color : #FFF;
            text-align : center;
            text-decoration : none;
            display : inline-block;
            font-size : 16px;
            cursor : pointer;
            border-radius : 5px;
            margin : 4px 2px;
        }
        .buttonblue {
            background-color : blue;
            width : 120px;
        }
        .buttongreen {
            background-color : #128F76;
            width : 120px;
        }
        #label-logo-s {
            margin-left : 20px;
            border-color: black;
            border-style: solid;
            border-width: 2px;
            display : inline-block;
            background-image : url(SD/common/unknown.jpg);
            width : 96px;
            height : 96px;
            margin-top: 5px;
        }
        #label-logo-m {
            margin-left : 40px;
            border-color: black;
            border-style: solid;
            border-width: 2px;
            display : inline-block;
            background-image : url(SD/unknown.jpg);
            width : 128px;
            height : 128px;
            margin-top: 5px;
        }
        #div-logo-s{
          display: none;
        }
        #div-logo-m{
          display: none;
        }
        #div-tone-s{
          display: none;
        }
        #div-tone-h{
          display: none;
        }
        canvas {
            left : 0;
            margin-left : 0;
            display : inline-block;
            width : 96px;
            height : 96px;
            border : #000 solid 2px;
        }
        .jsgrid-header-cell {
            padding : 0.1em !important ;
        }
        .jsgrid-cell {
            overflow : hidden !important ;
            white-space : nowrap !important ;
            padding : 0.1em 0.2em !important ;
        }
        .ui-widget-header {
            background : #11e9e9 !important ;
        }
        .ui-dialog .ui-dialog-buttonpane {
            margin-top : 0 !important ;
            border-width : 0 !important ;
            padding : 0 0 0 1em !important ;
        }
        .ui-dialog .ui-dialog-content {
            margin-top : 0.3em !important ;
            padding : 0.1em !important ;
        }
        .boxstyle {
            height : 36px;
            padding-top : 0;
            padding-left : 5px;
            padding-bottom : 0;
            background-color: white;
            font-size : 16px;
            line-height : normal;
            border-color: black;
            border-style: solid;
            border-width: thin;
            border-radius : 5px;
        }

/* The Modal (background) */
.modal {
  display: none; /* Hidden by default */
  position: fixed; /* Stay in place */
  z-index: 1; /* Sit on top */
  padding-top: 100px; /* Location of the box */
  left: 0;
  top: 0;
  width: 100%; /* Full width */
  height: 100%; /* Full height */
  overflow: auto; /* Enable scroll if needed */
  background-color: rgb(0,0,0); /* Fallback color */
  background-color: rgba(0,0,0,0.4); /* Black w/ opacity */
}

/* Modal Content */
.modal-content {
  background-color: lightskyblue;
  margin: auto;
  padding: 20px;
  border: 2px solid white;
  width: 80%;
}

/* The Close Button */
.close {
  color: orange;
  float: right;
  font-size:40px;
  font-weight: bold;
}

.close:hover,
.close:focus {
  color: red;
  text-decoration: none;
  cursor: pointer;
}
        .sliders{
          display: inline-flex;
          order: 1;

          width: 600px;
        }
.slidecontainer {
  display:flex;
  width: 100%;
  justify-content: center;
}

.slider {
  -webkit-appearance: none;
  width: 300px;
  height: 15px;
  display: flex;
  order: 0;
  border-radius: 5px;
  background: #d3d3d3;
  outline: none;
  opacity: 0.7;
  -webkit-transition: .2s;
  transition: opacity .2s;
}
.slider:hover {
  opacity: 1;
}

.slider::-webkit-slider-thumb {
  -webkit-appearance: none;
  appearance: none;
  width: 17px;
  height: 17px;
  border-radius: 50%;
  background: #4CAF50;
  cursor: pointer;
}

.slider::-moz-range-thumb {
  width: 17px;
  height: 17px;
  background: #4CAF50;
  cursor: pointer;
}
.slidecontainervol {
  display:flex;
  width: 100%;
  justify-content: center;
}
.slidervol {
  -webkit-appearance: none;
  width: 5000px;
  height: 15px;
  display: flex;
  order: 0;
  border-radius: 5px;
  background: #d3d3d3;
  outline: none;
  opacity: 0.7;
  -webkit-transition: .2s;
  transition: opacity .2s;
}
.slidervol:hover {
  opacity: 1;
}

.slidervol::-webkit-slider-thumb {
  -webkit-appearance: none;
  appearance: none;
  width: 25px;
  height: 25px;
  border-radius: 50%;
  background: #4CAF50;
  cursor: pointer;
}

.slidervol::-moz-range-thumb {
  width: 25px;
  height: 25px;
  background: #4CAF50;
  cursor: pointer;
}
        .sdr_lbl_left {
            display: inline-block;
            float: left;
            text-align:right;
            height: 25px;
            width: 100px;
            padding-top: 0px;
            padding-right: 5px;
            padding-bottom: 0px;
        }
        .sdr_lbl_right {
            display: inline-block;
            float: left;
            text-align:right;
            height: 25px;
            width: 45px;
            padding-top: 0px;
            padding-left: 5px;
            padding-bottom: 0px;
        }
        .sdr_lbl_measure {
            display: inline-block;
            float: left;
            text-align:left;
            height: 25px;
            width: 40px;
            padding-top: 0px;
            padding-bottom: 0px;
        }
</style>
</head>
<body>
<body id="BODY">

<div id="content" >

  <!-- ~~~~~~~~~~~~~~~~~~~~~~ hidden div ~~~~~~~~~~~~~~~~~~~~~~-->
  <div id="preloaded-images">
    <img src="SD/png/RadioGreen.png"                width="1" height="1" loading="eager" alt="Image 01" />
    <img src="SD/png/RadioYellow.png"               width="1" height="1" loading="eager" alt="Image 02" />
    <img src="SD/png/StationGreen.png"              width="1" height="1" loading="eager" alt="Image 03" />
    <img src="SD/png/StationYellow.png"             width="1" height="1" loading="eager" alt="Image 04" />
    <img src="SD/png/JukeboxGreen.png"              width="1" height="1" loading="eager" alt="Image 05" />
    <img src="SD/png/JukeboxYellow.png"             width="1" height="1" loading="eager" alt="Image 06" />
    <img src="SD/png/InternetGreen.png"             width="1" height="1" loading="eager" alt="Image 07" />
    <img src="SD/png/InternetYellow.png"            width="1" height="1" loading="eager" alt="Image 08" />
    <img src="SD/png/InfoGreen.png"                 width="1" height="1" loading="eager" alt="Image 09" />
    <img src="SD/png/InfoYellow.png"                width="1" height="1" loading="eager" alt="Image 10" />
    <img src="SD/png/ToneGreen.png"                 width="1" height="1" loading="eager" alt="Image 11" />
    <img src="SD/png/ToneYellow.png"                width="1" height="1" loading="eager" alt="Image 12" />
    <img src="SD/png/VolMinGreen.png"               width="1" height="1" loading="eager" alt="Image 15" />
    <img src="SD/png/VolMinYellow.png"              width="1" height="1" loading="eager" alt="Image 16" />
    <img src="SD/png/VolPlusGreen.png"              width="1" height="1" loading="eager" alt="Image 17" />
    <img src="SD/png/VolPlusYellow.png"             width="1" height="1" loading="eager" alt="Image 18" />
    <img src="SD/png/Mute_Green.png"                width="1" height="1" loading="eager" alt="Image 19" />
    <img src="SD/png/Mute_Yellow.png"               width="1" height="1" loading="eager" alt="Image 20" />
    <img src="SD/png/Mute_Red.png"                  width="1" height="1" loading="eager" alt="Image 21" />
    <img src="SD/png/OKGreen.png"                   width="1" height="1" loading="eager" alt="Image 22" />
    <img src="SD/png/OKYellow.png"                  width="1" height="1" loading="eager" alt="Image 23" />
    <img src="SD/png/QueryGreen.png"                width="1" height="1" loading="eager" alt="Image 24" />
    <img src="SD/png/QueryYellow.png"               width="1" height="1" loading="eager" alt="Image 25" />
    <img src="SD/png/UpArrowGreen.png"              width="1" height="1" loading="eager" alt="Image 26" />
    <img src="SD/png/UpArrowYellow.png"             width="1" height="1" loading="eager" alt="Image 27" />
    <img src="SD/png/DownArrowGreen.png"            width="1" height="1" loading="eager" alt="Image 28" />
    <img src="SD/png/DownArrowYellow.png"           width="1" height="1" loading="eager" alt="Image 29" />
    <img src="SD/common/MiniWebRadioV2.jpg"         width="1" height="1" loading="eager" alt="Image 30" />
    <img src="SD/png/PlayGreen.png"                 width="1" height="1" loading="eager" alt="Image 31" />
    <img src="SD/png/PlayYellow.png"                width="1" height="1" loading="eager" alt="Image 32" />
    <img src="SD/png/StopGreen.png"                 width="1" height="1" loading="eager" alt="Image 33" />
    <img src="SD/png/StopYellow.png"                width="1" height="1" loading="eager" alt="Image 34" />
    <img src="SD/png/LeftArrowGreen.png"            width="1" height="1" loading="eager" alt="Image 35" />
    <img src="SD/png/LeftArrowYellow.png"           width="1" height="1" loading="eager" alt="Image 36" />
    <img src="SD/png/RightArrowGreen.png"           width="1" height="1" loading="eager" alt="Image 37" />
    <img src="SD/png/RightArrowYellow.png"          width="1" height="1" loading="eager" alt="Image 38" />
    <img src="SD/png/ListGreen.png"                 width="1" height="1" loading="eager" alt="Image 39" />
    <img src="SD/png/ListYellow.png"                width="1" height="1" loading="eager" alt="Image 40" />
    <img src="SD/png/ShuffleGreen.png"              width="1" height="1" loading="eager" alt="Image 41" />
    <img src="SD/png/ShuffleYellow.png"             width="1" height="1" loading="eager" alt="Image 42" />
    <img src="SD/png/DLNA_logo_Yellow.png"          width="1" height="1" loading="eager" alt="Image 43" />
    <img src="SD/png/SD_logo_Yellow.png"            width="1" height="1" loading="eager" alt="Image 44" />

  </div>

  <div id="dialog">
    <table>
      <tr>
        <td> x </td>
        <td> <input type="text" id="txtX" size="100"/></td>
      </tr>
      <tr>
        <td>  Cy  </td>
        <td> <input type="text" id="txtCy" size="100"/></td>
      </tr>
      <tr>
        <td>  StationName  </td>
        <td> <input type="text" id="txtStationName" size="100"/></td>
      </tr>
      <tr>
        <td>  StreamURL  </td>
        <td> <input type="text" id="txtStreamURL" size="100"/></td>
      </tr>
    </table>
  </div>
  <!-- ~~~~~~~~~~~~~~~~~~~~ hidden div end ~~~~~~~~~~~~~~~~~~~~~~-->

<!-- The Modal -->
<div id="ToneModal" class="modal">
  <!-- Modal content -->
  <div class="modal-content">
    <span class="close">&times;</span>
      <header class="content"> 
        <h2>Sound Settings</h2>
      </header>
      <hr>
      <div id="div-tone-h" style="flex; flex:1; margin-top: 20px;justify-content: center;">
        <div style="width: 450px; height:160px;">
        <div id="sliders" style="flex: 1 0 ;justify-content: center;">
          <div class="slidecontainer" style="float: left; width 180px; height: 35px;">
          <label class="sdr_lbl_left">Treble Gain:</label>
            <input type="range" min="0" max="15" value="8" class="slider" id="TrebleGain"
                          onmouseup="slider_TG_mouseUp()"
                          ontouchend="slider_TG_mouseUp()"
                          oninput="slider_TG_change()">
          <label id="label_TG_value" class="sdr_lbl_right">00,0</label>
          <label class="sdr_lbl_measure; margin-left: 5px;">dB</label>
          </div>
          <div class="slidecontainer" style="float: left; width 180px; height: 35px;">
          <label class="sdr_lbl_left">Treble Freq:</label>
            <input type="range" min="1" max="15" value="8" class="slider" id="TrebleFreq"
                          onmouseup="slider_TF_mouseUp()"
                          ontouchend="slider_TF_mouseUp()"
                          oninput="slider_TF_change()">
          <label id="label_TF_value" class="sdr_lbl_right">00</label>
          <label class="sdr_lbl_measure; margin-left: 5px;">KHz</label>
          </div>
          <div class="slidecontainer" style="float: left; width 180px; height: 35px;">
          <label class="sdr_lbl_left">Bass Gain:</label>
            <input type="range" min="0" max="15" value="8" class="slider" id="BassGain"
                          onmouseup="slider_BG_mouseUp()"
                          ontouchend="slider_BG_mouseUp()"
                          oninput="slider_BG_change()">
          <label id="label_BG_value" class="sdr_lbl_right">+00</label>
          <label class="sdr_lbl_measure; margin-left: 5px;">dB</label>
          </div>
          <div class="slidecontainer" style="float: left; width 180px; height: 35px;">
          <label class="sdr_lbl_left">Bass Freq:</label>
            <input type="range" min="2" max="15" value="6" class="slider" id="BassFreq"
                          onmouseup="slider_BF_mouseUp()"
                          ontouchend="slider_BF_mouseUp()"
                          oninput="slider_BF_change()">
          <label  id="label_BF_value" class="sdr_lbl_right">000</label>
          <label class="sdr_lbl_measure; margin-left: 5px;">Hz</label>
          </div>
        </div>
        </div>
      </div>
      <div id="div-tone-s" style="flex; flex:1; margin-top: 50px;justify-content: center;">
        <div style="width: 450px; height:160px;">
          <div class="slidecontainer" style="float: left; width 180px; height: 35px;">
          <label class="sdr_lbl_left">Low:</label>
            <input type="range" min="0" max="15" value="13" class="slider" id="LowPass"
                          onmouseup="slider_LP_mouseUp()"
                          ontouchend="slider_LP_mouseUp()"
                          oninput="slider_LP_change()">
          <label id="label_LP_value" class="sdr_lbl_right">0</label>
          <label class="sdr_lbl_measure; margin-left: 5px;">dB</label>
          </div>
          <div class="slidecontainer" style="float: left; width 180px; height: 35px;">
          <label class="sdr_lbl_left">Band:</label>
            <input type="range" min="0" max="15" value="13" class="slider" id="BandPass"
                          onmouseup="slider_BP_mouseUp()"
                          ontouchend="slider_BP_mouseUp()"
                          oninput="slider_BP_change()">
          <label id="label_BP_value" class="sdr_lbl_right">0</label>
          <label class="sdr_lbl_measure; margin-left: 5px;">dB</label>
          </div>
          <div class="slidecontainer" style="float: left; width 180px; height: 35px;">
          <label class="sdr_lbl_left">High:</label>
            <input type="range" min="0" max="15" value="13" class="slider" id="HighPass"
                          onmouseup="slider_HP_mouseUp()"
                          ontouchend="slider_HP_mouseUp()"
                          oninput="slider_HP_change()">
          <label id="label_HP_value" class="sdr_lbl_right">0</label>
          <label class="sdr_lbl_measure; margin-left: 5px;">dB</label>
          </div>
        </div>
      </div>
    </div>
  <hr>
  </div>
 <!--==============================================================================================-->

  <div style="height: 66px; display: flex;">
    <div style="flex: 0 0 450px;">
      <img id="btn1" src="SD/png/RadioYellow.png" alt="Radio" onclick="showTab1()" />
      <img id="btn2" src="SD/png/StationGreen.png" alt="Stations" onclick="showTab2()" />
      <img id="btn3" src="SD/png/JukeboxGreen.png" alt="Player" onclick="showTab3()" />
      <img id="btn4" src="SD/png/InternetGreen.png" alt="Search" onclick="showTab4()" />
      <img id="ToneBtn" src="SD/png/ToneGreen.png" alt="Tone" onclick="Open Modal" />
      <img id="btn5" src="SD/png/InfoGreen.png" alt="Info" onclick="showTab5()" />
    </div>
    <div style="font-size: 50px; text-align: center; flex: 0.6;">
      MusicAlarmClock
    </div>
  </div>
  <hr>
          <div class="slidecontainer"  style="float: left;  height: 25px;">
          <label class="sdr_lbl_left">Volume:</label>
            <input type="range" min="0" max="21" value="0" class="slidervol" id="SLVolume" 
                          oninput="document.getElementById('label_Vol_value').innerHTML = SLVolume.value;handlevolume(this)">
                          
            <label id="label_Vol_value" class="sdr_lbl_right">000</label>
            <label class="sdr_lbl_measure; margin-left: 5px;"></label>
          </div>
          <hr>
<!--==============================================================================================-->
  <div id="tab-content1">
    <div style="height: 150px; display: flex;">
      <div id="div-logo-m" style="flex: 0 0 210px;">
        <label for="label-logo" id="label-logo-m" onclick="socket.send('homepage')"> </label>
      </div>
      <div id="div-logo-s" style="flex: 0 0 210px;">
        <label for="label-logo" id="label-logo-s" onclick="socket.send('homepage')"> </label>
      </div>
      
      <div style="flex: 1 ;">
        <select class="boxstyle" style="width:100%; margin-top: 50px;" onchange="handleStation(this)" id="preset">
          <option value="-1">Select a station here</option>
        </select>
      </div>
            <div style="flex: 0 0 210px; margin-top: 36px; margin-left: 20px;">
        <img src="SD/png/LeftArrowGreen.png" alt="previous"
                          onmousedown="this.src='SD/png/LeftArrowYellow.png'"
                          ontouchstart="this.src='SD/png/LeftArrowYellow.png'"
                          onmouseup="this.src='SD/png/LeftArrowGreen.png';  socket.send('prev_station');"
                          ontouchend="this.src='SD/png/LeftArrowGreen.png'; socket.send('prev_station');" />
        <img src="SD/png/RightArrowGreen.png" alt="next"
                          onmousedown="this.src='SD/png/RightArrowYellow.png'"
                          ontouchstart="this.src='SD/png/RightArrowYellow.png'"
                          onmouseup="this.src='SD/png/RightArrowGreen.png';  socket.send('next_station');"
                          ontouchend="this.src='SD/png/RightArrowGreen.png'; socket.send('next_station');" />
      </div>
    </div> 
    <div style="height: 66px; display: flex;">
    	            <div style="flex:1;">
        <input type="text" class="boxstyle" style="width: calc(100% - 8px); margin-top: 14px; " id="cmd" placeholder=" Waiting....">
      </div>
      <div style="flex: 0 0 210px;margin-left: 20px;">
        <img src="SD/png/VolMinGreen.png" alt="Vol_down"
                          onmousedown="this.src='SD/png/VolMinYellow.png'"
                          ontouchstart="this.src='SD/png/VolMinYellow.png'"
                          onmouseup="this.src='SD/png/VolMinGreen.png'"
                          ontouchend="this.src='SD/png/VolMinGreen.png'"
                          onclick="httpGet('downvolume', 1); getvolume()" />
        <img src="SD/png/VolPlusGreen.png" alt="Vol_up"
                          onmousedown="this.src='SD/png/VolPlusYellow.png'"
                          ontouchstart="this.src='SD/png/VolPlusYellow.png'"
                          onmouseup="this.src='SD/png/VolPlusGreen.png'"
                          ontouchend="this.src='SD/png/VolPlusGreen.png'"
                          onclick="httpGet('upvolume', 1); getvolume()" />
        <img id="Mute" src="SD/png/Mute_Green.png" alt="Mute"
                          onmousedown="this.src='SD/png/Mute_Yellow.png'"
                          ontouchstart="this.src='SD/png/Mute_Yellow.png'"
                          onclick="httpGet('setmute', 1)" />
      </div>

    </div>
    <div style="height: 66px; display: flex;">
      <div style="flex:1;">
        <input type="text" class="boxstyle" style="width: calc(100% - 8px); margin-top: 14px; padding-left:7px 0;" id="station" placeholder=" Enter a streamURL here....">
      </div>
      <div style="flex: 0 0 210px;margin-left: 20px;">
        <img src="SD/png/OKGreen.png" alt="Vol_up"
                          onmousedown="this.src='SD/png/OKYellow.png'"
                          ontouchstart="this.src='SD/png/OKYellow.png'"
                          onmouseup="this.src='SD/png/OKGreen.png'"
                          ontouchend='SD/png/OKGreen.png'"
                          onclick="setstation()" />
      </div>
    </div>
    <div style="height: 66px; display: flex;">
      <div style="flex:1;">
        <input type="text" class="boxstyle" style="width: calc(100% - 8px); margin-top: 14px; padding-left:7px 0;" id="resultstr1" placeholder=" Test....">
      </div>
      <div style="flex: 0 0 210px;margin-left: 20px;">
        <img src="SD/png/QueryGreen.png" alt="Test"
                          onmousedown="this.src='SD/png/QueryYellow.png'"
                          ontouchstart="this.src='SD/png/QueryYellow.png'"
                          onmouseup="this.src='SD/png/QueryGreen.png'"
                          ontouchend="this.src='SD/png/QueryGreen.png'"
                          onclick="httpGet('test', 1)" />
      </div>
    </div>
    <hr>
    <div style="height: 46px; padding: 0; text-align:center;">
     Find new radio stations at
      <a target="_blank" href="https://radiolise.gitlab.io">Radiolise</a>
      or
      <a target="_blank" href="http://streamstat.net/main.cgi?mode=all"> StreamStat.NET </a>
    </div>
  </div>
 <!--==============================================================================================-->
  <div id="tab-content2">
      <center>
      <div id="jsGrid"></div>
      <br>
      <button class="button buttongreen"
              onclick="saveGridFileToSD()"
              onmousedown="this.style.backgroundColor='#D62C1A'"
              ontouchstart="this.style.backgroundColor='#D62C1A'"
              onmouseup="this.style.backgroundColor='#128F76'"
              ontouchend="this.style.backgroundColor='#128F76'"
              title="Save to SD">Save
      </button>
      &nbsp;
      <button class="button buttongreen"
              onclick="loadGridFileFromSD()"
              onmousedown="this.style.backgroundColor='#D62C1A'"
              ontouchstart="this.style.backgroundColor='#D62C1A'"
              onmouseup="this.style.backgroundColor='#128F76'"
              ontouchend="this.style.backgroundColor='#128F76'"
              id="loadSD" title="Load from SD">Load
      </button>
      &nbsp;
      <button class="button buttonblue" onclick="saveExcel()" title="Download to PC">save xlsx</button>
      &nbsp;
      <button class="button buttonblue"
              onclick="javascript:document.getElementById('file').click();"
              title="Load from PC">load xlsx
      </button>
      <input id="file" type="file" style="visibility: hidden; width: 0px;"  name="img"
          onchange="loadDataExcel(this.files);"/>
      <br>
      </center>
  </div>
  <!--==============================================================================================-->
 <div id="tab-content3">
      <center>
      <br>
      <label for="seltrack"><big>Audio files on SD card:</big></label>
      <br>
      <select class="boxstyle" style="width: calc(100% -280px)"; onchange="trackreq(this)" id="seltrack">
          <option value="-1">Select a track here</option>
      </select>
      <br><br>
      <input type="text" class="boxstyle" style="width: calc(100% - 8px);" id="resultstr3" placeholder="Waiting for a command...."> <br>
      <br>
      <br><hr><br>
      <div style="flex: 0 0 210px;">
        <img src="SD/png/StopGreen.png" alt="Stop"
                          onmousedown="this.src='SD/png/StopYellow.png'"
                          ontouchstart="this.src='SD/png/StopYellow.png'"
                          onmouseup="this.src='SD/png/StopGreen.png';  socket.send('stopfile');"
                          ontouchend="this.src='SD/png/StopGreen.png'; socket.send('stopfile');" />
        <img src="SD/png/PlayGreen.png" alt="Play"
                          onmousedown="this.src='SD/png/PlayYellow.png'"
                          ontouchstart="this.src='SD/png/PlayYellow.png'"
                          onmouseup="this.src='SD/png/PlayGreen.png';  socket.send('resumefile');"
                          ontouchend="this.src='SD/png/PlayGreen.png'; socket.send('resumefile');" />
        <img src="SD/png/LeftArrowGreen.png" alt="Previous"
                          onmousedown="this.src='SD/png/LeftArrowYellow.png'"
                          ontouchstart="this.src='SD/png/LeftArrowYellow.png'"
                          onmouseup="this.src='SD/png/LeftArrowGreen.png';  socket.send('prev_track');"
                          ontouchend="this.src='SD/png/LeftArrowGreen.png'; socket.send('prev_track');" />
        <img src="SD/png/RightArrowGreen.png" alt="Next"
                          onmousedown="this.src='SD/png/RightArrowYellow.png'"
                          ontouchstart="this.src='SD/png/RightArrowYellow.png'"
                          onmouseup="this.src='SD/png/RightArrowGreen.png';  socket.send('next_track');"
                          ontouchend="this.src='SD/png/RightArrowGreen.png'; socket.send('next_track');" />
        <img id="shuffle_play" src="SD/png/ShuffleGreen.png" alt="ShufflePlay"
                          onmousedown="this.src='SD/png/ShuffleYellow.png'"
                          ontouchstart="this.src='SD/png/ShuffleYellow.png'"
                          onmouseup="this.src='SD/png/ShuffleGreen.png'; httpGet('shuffle_play', 1)"
                          ontouchend="this.src='SD/png/ShuffleGreen.png'; httpGet('shuffle_play', 1)" />
        <img src="SD/png/ListGreen.png" alt="New Tracks"
                          onmousedown="this.src='SD/png/ListYellow.png'"
                          ontouchstart="this.src='SD/png/ListYellow.png'"
                          onmouseup="this.src='SD/png/ListGreen.png';  socket.send('audiotracknew');"
                          ontouchend="this.src='SD/png/ListGreen.png'; socket.send('audiotracknew');" />
        <img id="plays" src="SD/png/SD_logo_Yellow.png" alt="plays"
                          onmousedown="this.src='SD/png/SD_logo_Green.png'"
                          ontouchstart="this.src='SD/png/SD_logo_Green.png'"
                          onmouseup="socket.send('changeplayer');"
                          ontouchend="socket.send('changeplayer');" />
      </div>

      <br><hr><br>
              <div style="flex: 0 0 calc(100% - 0px);">
            <select class="boxstyle" style="width: 100%;" onchange="selectserver(this)" id="server">
                <option value="-1">Select a DLNA Server here</option>
            </select>
            <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="select_l1(this)" id="level1">
                 <option value="-1"> </option>
            </select>
            <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="select_l2(this)" id="level2">
                <option value="-1"> </option>
            </select>
            <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="select_l3(this)" id="level3">
                <option value="-1"> </option>
            </select>
            <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="select_l4(this)" id="level4">
                <option value="-1"> </option>
            </select>
            <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="select_l5(this)" id="level5">
                <option value="-1"> </option>
            </select>
            <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="select_l6(this)" id="level6">
                <option value="-1"> </option>
            </select>
            <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="select_l7(this)" id="level7">
                <option value="-1"> </option>
            </select>
        </div>
      </center>
  </div>
  <!--==============================================================================================-->
  <div id="tab-content4">
      <div style="height: 30px;">
        This service is provided by
        <a target="_blank" href="http://www.radio-browser.info/">Community Radio Browser</a>
      </div>
      <div style="display: flex;">
        <div style="flex: 0 0 calc(100% - 66px);">
          <select class="boxstyle" style="width: 100%;" onchange="selectcategory(this)" id="category">
            <option value="-1">Select a category</option>
            <option value="bycountry">By country</option>
            <option value="bylanguage">By language</option>
            <option value="bytag">By tag</option>
          </select>
          <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="selectitem(this)" id="item">
            <option value="-1">Select a item here</option>
          </select>
          <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="selectstation(this)" id="stations">
            <option value="-1">Select a station here</option>
          </select>
        </div>
      </div>
      <hr>
      <div style="display: flex;">
        <div style="flex: 0 0 calc(100% - 66px); height: 66px;">
          StreamURL
          <input type="text" class="boxstyle" style="width: calc(100% - 8px);"
            id="streamurl" placeholder="StreamURL">
        </div>
        <div style="flex: 1; padding-left: 2px; height: 66px;">
          <img src="SD/png/OKGreen.png" alt="Vol_up"
            onmousedown="this.src='SD/png/OKYellow.png'"
            ontouchstart="this.src='SD/png/OKYellow.png'"
            onmouseup="this.src='SD/png/OKGreen.png'"
            ontouchend="this.src='SD/png/OKGreen.png'"
            onclick="teststreamurl()"/>
        </div>
      </div>
      <div style="display: flex;">
        <div style="flex: 0 0 calc(100% - 66px); height: 66px;">
          HomepageUrl
          <input type="text" class="boxstyle" style=" width: calc(100% - 8px);"
          id="homepageurl" placeholder="HomepageURL">
        </div>
        <div style="flex: 1; padding-left: 2px; height: 66px;">
          <img src="SD/png/OKGreen.png" alt="Vol_up"
            onmousedown="this.src='SD/png/OKYellow.png'"
            ontouchstart="this.src='SD/png/OKYellow.png'"
            onmouseup="this.src='SD/png/OKGreen.png'"
            ontouchend="this.src='SD/png/OKGreen.png'"
            onclick="window.open(homepageurl.value, '_blank')"/>
        </div>
      </div>
      <div style="display: flex;">
        <div style="flex: 0 0 calc(100% - 66px); height: 66px;">
          LogoUrl
          <input type="text" class="boxstyle" style="width: calc(100% - 8px);" onclick="refreshCanvas()"
            id="favicon" placeholder="Favicon">
        </div>
        <div style="flex: 1;  padding-left: 2px; height: 66px;">
          <img src="SD/png/OKGreen.png" alt="Vol_up"
            onmousedown="this.src='SD/png/OKYellow.png'"
            ontouchstart="this.src='SD/png/OKYellow.png'"
            onmouseup="this.src='SD/png/OKGreen.png'"
            ontouchend="this.src='SD/png/OKGreen.png'"
            onclick="window.open(favicon.value, '_blank')"/>
        </div>
      </div>
      <hr>
      <div style="display: flex;">
        <div style="flex: 0 0 130px; padding 1px 5px 5px 1px; ">
          <canvas id="canvas" width="96" height="96" class="playable-canvas"></canvas>
        </div>
        <div style="flex: 1;">
          <div style="flex: 1; height: 38px; padding-left: 10px;">
            <input type="text" class="boxstyle" style="width: calc(100% - 74px);"
                id="stationname" placeholder="Change the Stationname here">
          </div>
          <div style="flex: 1;  padding-top: 4px; padding-left: 10px;">
            <img src="SD/png/UpArrowGreen.png" alt="Upload" title="Upload to SD"
            onmousedown="this.src='SD/png/UpArrowYellow.png'"
            ontouchstart="this.src='SD/png/UpArrowYellow.png'"
            onmouseup="this.src='SD/png/UpArrowGreen.png'"
            ontouchend="this.src='SD/png/UpArrowGreen.png'"
            onclick="uploadCanvasImage()"/>

            <img src="SD/png/DownArrowGreen.png" alt="Download" title="Download to PC"
            onmousedown="this.src='SD/png/DownArrowYellow.png'"
            ontouchstart="this.src='SD/png/DownArrowYellow.png'"
            onmouseup="this.src='SD/png/DownArrowGreen.png'"
            ontouchend="this.src='SD/png/DownArrowGreen.png'"
            onclick="downloadCanvasImage()"/>

            <img src="SD/png/LeftArrowGreen.png" alt="addGrid" title="add to list"
            onmousedown="this.src='SD/png/LeftArrowYellow.png'"
            ontouchstart="this.src='SD/png/LeftArrowYellow.png'"
            onmouseup="this.src='SD/png/LeftArrowGreen.png'"
            ontouchend="this.src='SD/png/LeftArrowGreen.png'"
            onclick="addStationsToGrid()"/>

            <form method="post" accept-charset="utf-8" name="form1">
              <input name="hidden_data" id="hidden_data" type="hidden"/>
            </form>
          </div>
        </div>
      </div>
  </div>
  <!--==============================================================================================-->
  <div id="tab-content5">
    <p> MusicClock -- Webradio, MusicPlayer (Alarm)Clock ESP32, 3.5" color display and VS1053 MP3 module.<br>
    Copied WebRadio from  Wolle (schreibfaul1) <a target="blank" href="https://github.com/schreibfaul1/ESP32-MiniWebRadio">Github</a>.
    Copied tft-eSPI from Bodmer   <a target="blank" href="https://github.com/Bodmer/TFT_eSPI"</a>.</p>
    Modified Display and user interface, Player-part, Clock-part, Web-part and Icons by Linke Nelis
    <img src="SD/common/MiniWebRadioV2.jpg" alt="MiniWebRadioV2" border="3">
    <h3>Connected WiFi network
      <select class="boxstyle" onchange="handletone(this)" id="ssid"></select>
    </h3>
  </div>
  <!--==============================================================================================-->
</div>
<script>
var I2S_eq_DB = ['-40', '-37', '-34', '-31', '-28', '-25', '-22', '-19',
  '-16', '-13', '-10', ' -7', ' -4', '  0', ' +3', ' +6']

var I2S_eq_Val = [-40, -37, -34, -31, -28, -25, -22, -19, -16, -13, -10, -7, -4, 0, +3, +6]

var trebleDB = ['-12,0', '-10,5', ' -9,0', ' -7,5', ' -6,0', ' -4,5', ' -3,0', ' -1,5',
  '  0,0', ' +1,5', ' +3,0', ' +4,5', ' +6,0', ' +7,5', ' +9,0', '+10,5']

var trebleVal = [8, 9, 10, 11, 12, 13, 14, 15, 0, 1, 2, 3, 4, 5, 6, 7]

var tft_size = 0 
var audio_decoder  = 0  

<!---------------------------------------- Modal Sliders ----------------------------------------->
<!-- Get the modal-->
var modal = document.getElementById("ToneModal");

<!-- Get the button that opens the modal-->
var btn = document.getElementById("ToneBtn");

<!-- Get the <span> element that closes the modal
var span = document.getElementsByClassName("close")[0];

<!-- When the user clicks the button, open the modal -->
btn.onclick = function() {
  modal.style.display = "block";
}

<!-- When the user clicks on <span> (x), close the modal-->
span.onclick = function() {
  modal.style.display = "none";
}

<!-- When the user clicks anywhere outside of the modal, close it-->
window.onclick = function(event) {
  if (event.target == modal) {
    modal.style.display = "none";
  }
}

<!-- ---- websocket section-------------------------->

var socket = undefined
var host = location.hostname
var tm

function ping() {
  if (socket.readyState == 1) { // reayState 'open'
    socket.send("ping")
    console.log("send ping")
    tm = setTimeout(function () {
      toastr.warning('The connection to the MusicClock is interrupted! Please reload the page!')
    }, 20000)
  }
}

function connect() {
  socket = new WebSocket('ws://'+window.location.hostname+':81/');

  socket.onopen = function () {
    console.log("Websocket connected")
    socket.send('get_tftSize')
    socket.send('get_decoder')
    socket.send('to_listen')

    setInterval(ping, 20000)
  };

  socket.onclose = function (e) {
    console.log(e)
    console.log('Socket is closed. Reconnect will be attempted in 1 second.', e)
    socket = null
    setTimeout(function () {
      connect()
    }, 1000)
  }

  socket.onerror = function (err) {
    console.log(err)
  }

  socket.onmessage = function(event) {
    var socketMsg = event.data

    var n   = socketMsg.indexOf('=')
    var msg = ''
    var val = ''
    if (n >= 0) {
      var msg  = socketMsg.substring(0, n)
      var val  = socketMsg.substring(n + 1)
//    console.log("para ",msg, " val ",val)
    }
    else {
      msg = socketMsg
    }

    switch(msg) {
      case "pong":            clearTimeout(tm)
                              toastr.clear()
                              break
      case "mute":            if(val == '1') document.getElementById('Mute').src = 'SD/png/Mute_Red.png'
                              if(val == '0') document.getElementById('Mute').src = 'SD/png/Mute_Green.png'
                              break
      case "shuffle_play":    if(val == '1\n') document.getElementById('shuffle_play').src = 'SD/png/ShuffleYellow.png'
                              if(val == '0\n') document.getElementById('shuffle_play').src = 'SD/png/ShuffleGreen.png'
                              break
      case "getplays":        if(val == '0') document.getElementById('plays').src = 'SD/png/SD_logo_Yellow.png'
                              if(val == '1') document.getElementById('plays').src = 'SD/png/DLNA_logo_Yellow.png'
                              if(val == '2') document.getElementById('plays').src = 'SD/png/RadioYellow.png'
                              if(val == '3') document.getElementById('plays').src = 'SD/png/BTinYellow.png'
                              break
      case "stationNr":       document.getElementById('preset').selectedIndex = Number(val)
                              break
      case "stationURL":      station.value = val
                              break
      case "stationName":     if(tft_size == 0) showLabel('label-logo-s', val)
                              if(tft_size == 1) showLabel('label-logo-m', val)
                              break
      case "streamtitle":     cmd.value = val
                              break
      case "homepage":        window.open(val, '_blank') // show the station homepage
                              break
      case "icy_description": resultstr1.value = val
                              break
      case "AudioFileList":   getAudioFileList(val)
                              break
      case "displaysetvolume": getvolume()
                              break
      case "StateRadio":      showTab1()
                              break
      case "StatePlayer":     showTab3()
                              break
      case "tftSize":         if(val == 's')  { tft_size = 0; // 320x240px
                                                document.getElementById('div-logo-m').style.display = 'none';
                                                document.getElementById('div-logo-s').style.display = 'block';
                                                document.getElementById('canvas').width  = 96;
                                                document.getElementById('canvas').height = 96;
                                                console.log("tftSize is s");
                              }
                              if(val == 'm')  { tft_size = 1;
                                                document.getElementById('div-logo-s').style.display = 'none';
                                                document.getElementById('div-logo-m').style.display = 'block';
                                                document.getElementById('canvas').width  = 128;
                                                document.getElementById('canvas').height = 128;
                                                console.log("tftSize is m");
                              }
                              break
      case  "decoder":        if(val == 'h')  { audio_decoder = 0; // vs1053 HW decoder
                                                document.getElementById('div-tone-s').style.display = 'none';
                                                document.getElementById('div-tone-h').style.display = 'block';
                                                console.log("vs1053");
                              }
                              if(val == 's')  { audio_decoder = 1; // audioI2S SW decoder
                                                document.getElementById('div-tone-h').style.display = 'none';
                                                document.getElementById('div-tone-s').style.display = 'block';
                                                console.log("audioI2S");}
                              break
      case  "volume":         resultstr1.value = "Volume is now " + val;
                              break
      case  "audiotrack":     resultstr3.value = "Audiofile is " + val;
                              break

      case  "stopfile":       resultstr3.value = val;
                              break

      case  "resumefile":     resultstr3.value = val;
                              break

      case  "timeAnnouncement": console.log("timeAnnouncement=" + val)
                              if(val == '0') document.getElementById('chk_timeSpeech').checked = false;
                              if(val == '1') document.getElementById('chk_timeSpeech').checked = true;
                              break

      case "clearDLNA":       clearDLNAServerList()
                              break

      case "DLNA_Names":      addDLNAServer(val) // add to Serverlist
                              break
      case "Level1":          show_DLNA_Content(val, 1)
                              break
      case "Level2":          show_DLNA_Content(val, 2)
                              break
      case "Level3":          show_DLNA_Content(val, 3)
                              break
      case "Level4":          show_DLNA_Content(val, 4)
                              break
      case "Level5":          show_DLNA_Content(val, 5)
                              break
      case "Level6":          show_DLNA_Content(val, 6)
                              break
      case "Level7":          show_DLNA_Content(val, 7)
                              break
      default:                console.log('unknown message', msg, val)
    }
  }
}
<!-- ---- end websocket section------------------------>


document.addEventListener('readystatechange', event => {
  if (event.target.readyState === 'interactive') { // same as:  document.addEventListener('DOMContentLoaded'...
    // same as  jQuery.ready
    console.log('All HTML DOM elements are accessible')
    document.getElementById('dialog').style.display = 'none' <!-- //hide the div (its only a template) -->
  }
  if (event.target.readyState === 'complete') {
    console.log('Now external resources are loaded too, like css,src etc... ')
    connect()  // establish websocket connection
    gettone()   // Now load the tones (tab Radio)
    getvolume()
    getnetworks()
    getmute()
    loadGridFileFromSD()
    showExcelGrid()
  }
})

toastr.options = {
  "closeButton": false,
  "debug": false,
  "newestOnTop": false,
  "progressBar": false,
  "positionClass": "toast-top-right",
  "preventDuplicates": true,
  "preventOpenDuplicates": true,
  "onclick": null,
  "showDuration": "300",
  "hideDuration": "1000",
  "timeOut": "20000",
  "extendedTimeOut": "1000",
  "showEasing": "swing",
  "hideEasing": "linear",
  "showMethod": "fadeIn",
  "hideMethod": "fadeOut"
}

function showTab1 () {
  console.log('tab-content1 (Radio)')
  document.getElementById('tab-content1').style.display = 'block'
  document.getElementById('tab-content2').style.display = 'none'
  document.getElementById('tab-content3').style.display = 'none'
  document.getElementById('tab-content4').style.display = 'none'
  document.getElementById('tab-content5').style.display = 'none'
  document.getElementById('btn1').src = 'SD/png/RadioYellow.png'
  document.getElementById('btn2').src = 'SD/png/StationGreen.png'
  document.getElementById('btn3').src = 'SD/png/JukeboxGreen.png'
  document.getElementById('btn4').src = 'SD/png/InternetGreen.png'
  document.getElementById('btn5').src = 'SD/png/InfoGreen.png'
  document.getElementById('ToneBtn').src = 'SD/png/ToneGreen.png'
  socket.send("change_state=" + "0")
  getmute()
}

function showTab2 () {
  console.log('tab-content2 (Stations)')
  document.getElementById('tab-content1').style.display = 'none'
  document.getElementById('tab-content2').style.display = 'block'
  document.getElementById('tab-content3').style.display = 'none'
  document.getElementById('tab-content4').style.display = 'none'
  document.getElementById('tab-content5').style.display = 'none'
  document.getElementById('btn1').src = 'SD/png/RadioGreen.png'
  document.getElementById('btn2').src = 'SD/png/StationYellow.png'
  document.getElementById('btn3').src = 'SD/png/JukeboxGreen.png'
  document.getElementById('btn4').src = 'SD/png/InternetGreen.png'
  document.getElementById('btn5').src = 'SD/png/InfoGreen.png'
  document.getElementById('ToneBtn').src = 'SD/png/ToneGreen.png'
  $('#jsGrid').jsGrid('refresh')
}

function showTab3 () {
  console.log('tab-content3 (Audio Player)')
  document.getElementById('tab-content1').style.display = 'none'
  document.getElementById('tab-content2').style.display = 'none'
  document.getElementById('tab-content3').style.display = 'block'
  document.getElementById('tab-content4').style.display = 'none'
  document.getElementById('tab-content5').style.display = 'none'
  document.getElementById('btn1').src = 'SD/png/RadioGreen.png'
  document.getElementById('btn2').src = 'SD/png/StationGreen.png'
  document.getElementById('btn3').src = 'SD/png/JukeboxYellow.png'
  document.getElementById('btn4').src = 'SD/png/InternetGreen.png'
  document.getElementById('btn5').src = 'SD/png/InfoGreen.png'
  document.getElementById('ToneBtn').src = 'SD/png/ToneGreen.png'
  document.getElementById('level1').options.length = 0
  document.getElementById('level2').options.length = 0
  document.getElementById('level3').options.length = 0
  document.getElementById('level4').options.length = 0
  document.getElementById('level5').options.length = 0
  document.getElementById('level6').options.length = 0
  document.getElementById('level7').options.length = 0
  socket.send("change_state=6")
  getmute()
  socket.send("getshuffle")
  socket.send("getplays")
  socket.send("audiolist") // Now get the audio file list from SD
  socket.send('DLNA_getServer')
}

function showTab4 () {
  console.log('tab-content4 (Search Stations)')
  document.getElementById('tab-content1').style.display = 'none'
  document.getElementById('btn1').src = 'SD/png/Radio_Green.png'
  document.getElementById('tab-content2').style.display = 'none'
  document.getElementById('tab-content3').style.display = 'none'
  document.getElementById('tab-content4').style.display = 'block'
  document.getElementById('tab-content5').style.display = 'none'
  document.getElementById('btn1').src = 'SD/png/RadioGreen.png'
  document.getElementById('btn2').src = 'SD/png/StationGreen.png'
  document.getElementById('btn3').src = 'SD/png/JukeboxGreen.png'
  document.getElementById('btn4').src = 'SD/png/InternetYellow.png'
  document.getElementById('btn5').src = 'SD/png/InfoGreen.png'
  document.getElementById('ToneBtn').src = 'SD/png/ToneGreen.png'
}

function showTab5 () {
  console.log('tab-content5 (About)')
  document.getElementById('tab-content1').style.display = 'none'
  document.getElementById('tab-content2').style.display = 'none'
  document.getElementById('tab-content3').style.display = 'none'
  document.getElementById('tab-content4').style.display = 'none'
  document.getElementById('tab-content5').style.display = 'block'
  document.getElementById('btn1').src = 'SD/png/RadioGreen.png'
  document.getElementById('btn2').src = 'SD/png/StationGreen.png'
  document.getElementById('btn3').src = 'SD/png/JukeboxGreen.png'
  document.getElementById('btn4').src = 'SD/png/InternetGreen.png'
  document.getElementById('btn5').src = 'SD/png/InfoYellow.png'
  document.getElementById('ToneBtn').src = 'SD/png/ToneGreen.png'
}

function uploadTextFile (fileName, content) {
  var fd = new FormData()
  fd.append('Text=', content)
  var theUrl = 'uploadfile?' + fileName + '&version=' + Math.random()
  var xhr = new XMLHttpRequest()
  xhr.open('POST', theUrl, true)
  xhr.onreadystatechange = function () { // Call a function when the state changes.
    if (xhr.readyState === 4) {
      if (xhr.responseText === 'OK') alert(fileName + ' successfully uploaded')
      else alert(fileName + ' not uploaded')
    }
  }
  xhr.send(fd) // send
}

// ----------------------------------- DLNA ------------------------------------
function clearDLNAServerList(){
    console.log('clear DLNA server list')
    var select
    select = document.getElementById('server')
    select.options.length = 0;
    var option = new Option("Select a DLNA server here")
    select.appendChild(option);

    select = document.getElementById('level1')
    select.options.length = 0;
    select = document.getElementById('level2')
    select.options.length = 0;
    select = document.getElementById('level3')
    select.options.length = 0;
    select = document.getElementById('level4')
    select.options.length = 0;
    select = document.getElementById('level5')
    select.options.length = 0;
    select = document.getElementById('level6')
    select.options.length = 0;
    select = document.getElementById('level7')
    select.options.length = 0;
}

function addDLNAServer(val){
    var server = val.split(",")
    var select = document.getElementById('server')
    var option = new Option(server[0], server[1]); // e.g. "Wolles-FRITZBOX Mediaserver,1"  (friendlyName, ServerIdx)
    console.log(server[0], server[1]);
    select.appendChild(option);
}
function show_DLNA_Content(val, level){
    var select
    if(level == 1) select = document.getElementById('level1')
    if(level == 2) select = document.getElementById('level2')
    if(level == 3) select = document.getElementById('level3')
    if(level == 4) select = document.getElementById('level4')
    if(level == 5) select = document.getElementById('level5')
    if(level == 6) select = document.getElementById('level6')
    if(level == 7) select = document.getElementById('level7')
    if(select.options.length == 0){
        var option = new Option("Select level " + level.toString())
        select.appendChild(option);
    }
    content = JSON.parse(val)
    var isDir = content[0].isDir
    var n
    var c
    if(isDir){
        n = content[0].name.concat('\xa0\xa0', '\(' + content[0].size + '\)'); // more than one space
        c = 'D=' + content[0].id // is directory
    }
    else{
        n = content[0].name + '\xa0\xa0' + content[0].size;
        c = 'F=' + content[0].id // is file, id is uri
    }
    if(content[0].isAudio){
        var option = new Option(n, c); // e.g.
        option.style.color = "black"
    }
    else{
        var option = new Option(n); // e.g.
        option.style.color = "red"
    }
    console.log(n, c);
    select.appendChild(option);
}
function selectserver (presctrl) { // preset, select a server, root, level0
    socket.send('DLNA_getContent0=' + presctrl.value)
    select = document.getElementById('level1'); select.options.length = 0; // clear next level
    select = document.getElementById('level2'); select.options.length = 0;
    select = document.getElementById('level3'); select.options.length = 0;
    select = document.getElementById('level4'); select.options.length = 0;
    select = document.getElementById('level5'); select.options.length = 0;
    select = document.getElementById('level6'); select.options.length = 0;
    select = document.getElementById('level7'); select.options.length = 0;
    console.log('DLNA_getContent0=' + presctrl.value)
}
function select_l1 (presctrl) { // preset, select root
    socket.send('DLNA_getContent1=' + presctrl.value)
    select = document.getElementById('level2'); select.options.length = 0; // clear next level
    select = document.getElementById('level3'); select.options.length = 0;
    select = document.getElementById('level4'); select.options.length = 0;
    select = document.getElementById('level5'); select.options.length = 0;
    select = document.getElementById('level6'); select.options.length = 0;
    select = document.getElementById('level7'); select.options.length = 0;
    console.log('DLNA_getContent1=' + presctrl.value)
}
function select_l2 (presctrl) { // preset, select level 1
    socket.send('DLNA_getContent2=' + presctrl.value)
    select = document.getElementById('level3'); select.options.length = 0;
    select = document.getElementById('level4'); select.options.length = 0;
    select = document.getElementById('level5'); select.options.length = 0;
    select = document.getElementById('level6'); select.options.length = 0;
    select = document.getElementById('level7'); select.options.length = 0;
    console.log('DLNA_getContent2=' + presctrl.value)
}
function select_l3 (presctrl) { // preset, select level 2
    socket.send('DLNA_getContent3=' + presctrl.value)
    select = document.getElementById('level4'); select.options.length = 0;
    select = document.getElementById('level5'); select.options.length = 0;
    select = document.getElementById('level6'); select.options.length = 0;
    select = document.getElementById('level7'); select.options.length = 0;
    console.log('DLNA_getContent3=' + presctrl.value)
 }
 function select_l4 (presctrl) { // preset, select level 3
    socket.send('DLNA_getContent4=' + presctrl.value)
    select = document.getElementById('level5'); select.options.length = 0;
    select = document.getElementById('level6'); select.options.length = 0;
    select = document.getElementById('level7'); select.options.length = 0;
    console.log('DLNA_getContent4=' + presctrl.value)
 }
 function select_l5 (presctrl) { // preset, select level 4
    socket.send('DLNA_getContent5=' + presctrl.value)
    select = document.getElementById('level6'); select.options.length = 0;
    select = document.getElementById('level7'); select.options.length = 0;
    console.log('DLNA_getContent5=' + presctrl.value)
 }
  function select_l6 (presctrl) { // preset, select level 5
    socket.send('DLNA_getContent6=' + presctrl.value)
    select = document.getElementById('level7'); select.options.length = 0;
    console.log('DLNA_getContent6=' + presctrl.value)
 }
  function select_l7 (presctrl) { // preset, select level 5
    socket.send('DLNA_getContent6=' + presctrl.value)
    console.log('DLNA_getContent6=' + presctrl.value)
 }


// ----------------------------------- TAB RADIO ------------------------------------

function showLabel (id, src) { // get the bitmap from SD, convert to URL first
  src = src.replace(/%/g, '%25') // % must be the first
  src = src.replace(/\s/g, '%20') // URLs never can have blanks
  // src=src.replace(/!/g  , '%21')  // not necessary to replace
  // src=src.replace(/\'/g , '%22')  // not allowed in Windows filenames
  // src=src.replace(/#/g  , '%23')  // can not be used, is separator in list
  // src=src.replace(/\$/g , '%24')  // not necessary to replace
  // src=src.replace(/&/g  , '%26')  // not necessary to replace
  src = src.replace(/'/g, '%27') // must be replace
  src = src.replace(/\(/g, '%28') // must be replace
  src = src.replace(/\)/g, '%29') // must be replace
  // src=src.replace(/\*/g , '%2A')  // not allowed in Windows filenames
  src = src.replace(/\+/g, '%2B') // is necessary to replace, + is the same as space
  // src=src.replace(/,/g  , '%2C')  // commas are later replaced in dots
  // src=src.replace(/\-/g , '%2D')  // not necessary to replace
  // src=src.replace(/\./g , '%2E')  // not necessary to replace
  // src=src.replace('/'   , '%2F')  // is separator, not usable
  // src=src.replace(/:/g  , '%3A')  // not allowed in Windows filenames
  // src=src.replace(/;/g  , '%3B')  // not necessary to replace
  // src=src.replace(/</g  , '%3C')  // not allowed in Windows filenames
  // src=src.replace(/\=/g , '%3D')  // can't be used in selectboxes
  // src=src.replace(/>/g  , '%3E')  // not allowed in Windows filenames
  // src=src.replace(/\?/g , '%3F')  // not allowed in Windows filenames
  // src=src.replace(/@/g  , '%40')  // not necessary to replace
  // src=src.replace(/\[/g , '%5B')  // not necessary to replace
  // src=src.replace('\'   , '%5C')  // not necessary to replace
  // src=src.replace(/\]/g , '%5D')  // not necessary to replace
  // src=src.replace(/\{/g , '%7B')  // not necessary to replace
  // src=src.replace(/\|/g , '%7C')  // not allowed in filenames
  // src=src.replace(/\}/g , '%7D')  // not necessary to replace

  var timestamp = new Date().getTime()
  var file
  if(src == '' || src === 'unknown'){
    file = 'url(SD/unknown.jpg?t=' + timestamp + ')'
    document.getElementById(id).style.backgroundImage = file
    return
  }
  var idx = src.indexOf('|')
  if(idx > 0) src = src.substring(idx+1); // all after pipe
  file = 'url(SD/logo/' + src + '.jpg?t=' + timestamp + ')'
  console.log("showLabel id=", id, "file=", file)
  document.getElementById(id).style.backgroundImage = file
}

var _num = 0

function httpGet (theReq, nr) { // universal request prev, next, vol,  mute...
  var param = ''
  var idx = theReq.indexOf('=')
  if (idx > 0){
    param = theReq.substr(idx+1)
    theReq = theReq.substr(0, idx)
  }
  var theUrl =  '/' + theReq + '?' + param + '&version=' + Math.random()
  var xhr = new XMLHttpRequest()
  xhr.onreadystatechange = function () {
    if (xhr.readyState === XMLHttpRequest.DONE) {
      if (nr === 1) {
        if (xhr.responseText.startsWith('http')) {
          console.log(xhr.responseText)
          window.open(xhr.responseText, '_blank') // show the station homepage
        } else if (xhr.responseText.startsWith('Mute')) {
          console.log(xhr.responseText)
          resultstr1.value = xhr.responseText // all other
          if (xhr.responseText.endsWith('off\n')) {
            document.getElementById('Mute').src = 'SD/png/Mute_Green.png'
          }
          if (xhr.responseText.endsWith('on\n')) {
            document.getElementById('Mute').src = 'SD/png/Mute_Red.png'
          } 
        } else if (xhr.responseText.startsWith('shuffle_play')) {
          console.log(xhr.responseText)
          resultstr1.value = xhr.responseText // all other
          if (xhr.responseText==='0\n') {
            document.getElementById('shuffle_play').src = 'SD/png/ShuffleGreen.png'
          }
          if (xhr.responseText==='1\n') {
            document.getElementById('shuffle_play').src = 'SD/png/ShuffleYellow.png'
          }
        } else if (xhr.responseText.startsWith('plays')) {
          console.log(xhr.responseText)
          resultstr1.value = xhr.responseText // all other
          if (xhr.responseText==='0') {
            document.getElementById('plays').src = 'SD/png/RadioYellow.png'
          }
          if (xhr.responseText==='1') {
            document.getElementById('plays').src = 'SD/png/SD_logo_Yellow.png'
          }
          if (xhr.responseText==='2') {
            document.getElementById('plays').src = 'SD/png/DLNA_logo_Yellow.png'
          }
          if (xhr.responseText==='3') {
            document.getElementById('plays').src = 'SD/png/BTinYellow.png'
          }
        } else if (theReq === 'mute' || theReq.startsWith('upvolume') || theReq.startsWith('Set Volume')) {
          resultstr1.value = xhr.responseText
        } else if (theReq === 'getstreamtitle') {
          cmd.value = xhr.responseText
        } else resultstr1.value = xhr.responseText
      }
      if (nr === 2) resultstr2.value = xhr.responseText
      if (nr === 3) resultstr3.value = xhr.responseText
    }
  }
  xhr.open('GET', theUrl, true)
  xhr.send()
}

function gettone () { // tab Radio: get tones values and set them
  var i, lines, parts
  var theUrl = '/gettone?' + '&version=' + Math.random()
  var xhr = new XMLHttpRequest()
  xhr.onreadystatechange = function () {
    if (xhr.readyState === XMLHttpRequest.DONE) {
      lines = xhr.responseText.split('\n')
      for (i = 0; i < (lines.length - 1); i++) {
        parts = lines[i].split('=')
        setSlider(parts[0], parts[1])
      }
    }
  }
  xhr.open('GET', theUrl, true)
  xhr.send()
}

function getvolume () { // tab Radio: get volume values and set them
  var theUrl = '/getvolume?' + '&version=' + Math.random()
  var xhr = new XMLHttpRequest()
  xhr.onreadystatechange = function () {
    if (xhr.readyState === XMLHttpRequest.DONE) {
      if (xhr.status === 200) {
          var val = Number(xhr.responseText)
        document.getElementById('SLVolume').value = val
        document.getElementById('label_Vol_value').innerHTML = val
      }
    }
  }
  xhr.open('GET', theUrl, true)
  xhr.send()
}

function getmute () {
  var theUrl = '/getmute?' + '&version=' + Math.random()
  var xhr = new XMLHttpRequest()
  xhr.onreadystatechange = function () {
    if (xhr.readyState === XMLHttpRequest.DONE) {
      if (xhr.responseText === '1') {
        document.getElementById('Mute').src = 'SD/png/Mute_Red.png' // muteOn
      } else {
        document.getElementById('Mute').src = 'SD/png/Mute_Green.png'
      }
    }
  }
  xhr.open('GET', theUrl, true)
  xhr.send()
}

function handleStation (presctrl) { // tab Radio: preset, select a station
  cmd.value = ''
  socket.send('set_station=' + presctrl.value)
}

function handletone (tonectrl) { // Radio: treble, bass, freq
  var theUrl = '/' + tonectrl.id + '?' + tonectrl.value + '&version=' + Math.random()
  var xhr = new XMLHttpRequest()
  xhr.onreadystatechange = function () {
    if (xhr.readyState === XMLHttpRequest.DONE) {
      resultstr1.value = xhr.responseText
    }
  }
  xhr.open('GET', theUrl, true)
  xhr.send()
}

function handlevolume (volumectrl) { // Radio: volume
  var theUrl = '/' + volumectrl.id + '?' + volumectrl.value + '&version=' + Math.random()
  var xhr = new XMLHttpRequest()
  xhr.onreadystatechange = function () {
    if (xhr.readyState === XMLHttpRequest.DONE) {
      resultstr1.value = xhr.responseText
    }
  }
  xhr.open('GET', theUrl, true)
  xhr.send()
}

function setstation () { // Radio: button play - Enter a streamURL here....
  var theUrl = '/stationURL?' + station.value + '&version=' + Math.random()
  var sel = document.getElementById('preset')
  sel.selectedIndex = 0
  cmd.value = ''
  var xhr = new XMLHttpRequest()
  xhr.onreadystatechange = function () {
    if (xhr.readyState === XMLHttpRequest.DONE) {
      resultstr1.value = xhr.responseText
      if(tft_size == 0) showLabel('label-logo-s', 'unknown')
      if(tft_size == 1) showLabel('label-logo-m', 'unknown')
    }
  }
  xhr.open('GET', theUrl, true)
  xhr.send()
}

function selectItemByValue (elmnt, value) { // tab Radio: load and set tones
  var sel = document.getElementById(elmnt)
  for (var i = 0; i < sel.options.length; i++) {
    if (sel.options[i].value === value) {
      sel.selectedIndex = i
    }
  }
}

function setSlider (elmnt, value) {
  if (elmnt === 'toneha') slider_TG_set(value)
  if (elmnt === 'tonehf') slider_TF_set(value)
  if (elmnt === 'tonela') slider_BG_set(value)
  if (elmnt === 'tonelf') slider_BF_set(value)
  v = Math.trunc((40 + parseInt(value, 10)) /3)
  console.log("setSlider", elmnt, value)
  if (elmnt === 'LowPass' ) slider_LP_set(v)
  if (elmnt === 'BandPass') slider_BP_set(v)
  if (elmnt === 'HighPass') slider_HP_set(v)
}


function slider_TG_mouseUp () { // Slider Treble Gain   mouseupevent
  handlectrl('toneha', trebleVal[TrebleGain.value])
  // console.log('Treble Gain=%i',Number(TrebleGain.value));
}

function slider_TG_change () { //  Slider Treble Gain  changeevent
  //console.log('Treble Gain=%i', Number(TrebleGain.value))
  document.getElementById('label_TG_value').innerHTML = trebleDB[TrebleGain.value]
}

function slider_TG_set (value) { // set Slider Treble Gain
  var val = Number(value)
  if (val < 8) val = val + 8
  else val = val - 8
  document.getElementById('TrebleGain').value = val
  document.getElementById('label_TG_value').innerHTML = trebleDB[TrebleGain.value]
  console.log('Treble Gain=%i', val)
}

function slider_TF_mouseUp () { // Slider Treble Freq   mouseupevent
  handlectrl('tonehf', TrebleFreq.value)
  // console.log('Treble Freq=%i', Number(TrebleFreq.value));
}

function slider_TF_change () { //  Slider Treble Freq  changeevent
  console.log('Treble Freq=%i', Number(TrebleFreq.value))
  document.getElementById('label_TF_value').innerHTML = TrebleFreq.value
}

function slider_TF_set (value) { // set Slider Treble Freq
  var val = Number(value)
  document.getElementById('TrebleFreq').value = val
  document.getElementById('label_TF_value').innerHTML = TrebleFreq.value
  console.log('Treble Freq=%i', val)
}

function slider_BG_mouseUp () { // Slider Bass Gain   mouseupevent
  handlectrl('tonela', BassGain.value)
  // console.log('Bass Gain=%i', Number(BassGain.value));
}

function slider_BG_change () { //  Slider Bass Gain  changeevent
  var sign = ''
  if (BassGain.value !== '0') sign = '+'
  console.log('Bass Gain=%i', Number(BassGain.value))
  document.getElementById('label_BG_value').innerHTML = sign + BassGain.value
}

function slider_BG_set (value) { // set Slider Bass Gain
  var val = Number(value)
  var sign = ''
  if (BassGain.value !== '0') sign = '+'
  document.getElementById('BassGain').value = val
  document.getElementById('label_BG_value').innerHTML = sign + BassGain.value
  console.log('Bass Gain=%i', val)
}

function slider_BF_mouseUp () { // Slider Bass Gain   mouseupevent
  handlectrl('tonelf', BassFreq.value)
  // console.log('Bass Freq=%i', Number(BassFreq.value));
}

function slider_BF_change () { //  Slider Bass Gain  changeevent
  console.log('Bass Freq=%i', Number(BassFreq.value))
  document.getElementById('label_BF_value').innerHTML = (BassFreq.value - 1) * 10
}

function slider_BF_set (value) { // set Slider Bass Gain
  var val = Number(value)
  document.getElementById('BassFreq').value = val
  document.getElementById('label_BF_value').innerHTML = (BassFreq.value - 1) * 10
  console.log('Bass Freq=%i', val)
}

function slider_LP_mouseUp () { // Slider LowPass mouseupevent
  handlectrl('LowPass', I2S_eq_Val[LowPass.value])
  console.log('LowPass=%i', Number(LowPass.value));
}

function slider_LP_change () { //  Slider LowPass changeevent
  console.log('LowPass=%i', Number(LowPass.value))
  document.getElementById('label_LP_value').innerHTML = I2S_eq_DB[LowPass.value]
}

function slider_LP_set (value) { // set Slider LowPass
  var val = Number(value)
  document.getElementById('LowPass').value = val
  document.getElementById('label_LP_value').innerHTML = I2S_eq_DB[LowPass.value]
  console.log('LowPass=%i', val)
}

function slider_BP_mouseUp () { // BandPass mouseupevent
  handlectrl('BandPass', I2S_eq_Val[BandPass.value])
  console.log('BandPass=%i', Number(BandPass.value));
}

function slider_BP_change () { //  BandPass changeevent
  console.log('BandPass=%i', Number(BandPass.value))
  document.getElementById('label_BP_value').innerHTML = I2S_eq_DB[BandPass.value]
}

function slider_BP_set (value) { // set Slider BandPass
  var val = Number(value)
  document.getElementById('BandPass').value = val
  document.getElementById('label_BP_value').innerHTML = I2S_eq_DB[BandPass.value]
  console.log('BandPass=%i', val)
}

function slider_HP_mouseUp () { // Slider HighPass mouseupevent
  handlectrl('HighPass', I2S_eq_Val[HighPass.value])
  console.log('HighPass=%i', Number(HighPass.value));
}

function slider_HP_change () { //  Slider HighPass changeevent
  console.log('HighPass=%i', Number(HighPass.value))
  document.getElementById('label_HP_value').innerHTML = I2S_eq_DB[HighPass.value]
}

function slider_HP_set (value) { // set Slider HighPass
  var val = Number(value)
  document.getElementById('HighPass').value = val
  document.getElementById('label_HP_value').innerHTML = I2S_eq_DB[HighPass.value]
  console.log('HighPass=%i', val)
}

function handlectrl (id, val) { // Radio: treble, bass, freq, volume
  var theUrl = '/' + id + '?' + val + '&version=' + Math.random()
  var xhr = new XMLHttpRequest()
  xhr.onreadystatechange = function () {
    if (xhr.readyState === XMLHttpRequest.DONE) {
      resultstr1.value = xhr.responseText
    }
  }
  xhr.open('GET', theUrl, true)
  xhr.send()
}

// ----------------------------------- TAB CONFIG ------------------------------------

function saveGridFileToSD () { // save to SD
  var wsData = $('#jsGrid').jsGrid('option', 'data')
  var strJSON = JSON.stringify(wsData)
  var objJSON = JSON.parse(strJSON)
  console.log(wsData.length)
  var txt = ''
  var l
  var c
  var select, opt
  select = document.getElementById('preset') // Radio: show stationlist
  select.options.length = 1
  var j = 1
  txt = 'X\tCy\tStationName\tStreamURL\n'
  for (var i = 0; i < wsData.length; i++) {
    c = ''
    if (objJSON[i].X) {
      c = objJSON[i].X
      txt += c+ '\t'
    } else txt += '\t'
    if (objJSON[i].X !== '*') {
      if (j < 1000) {
        opt = document.createElement('OPTION')
        opt.text = (('000' + j).slice(-3) + ' - ' + objJSON[i].StationName)
        select.add(opt)
      }
      j++
    }
    if (objJSON[i].Cy) {
      c = objJSON[i].Cy
      c = c + '\t'
      txt += c
    } else txt += '\t'
    if (objJSON[i].StationName) {
      c = objJSON[i].StationName
      c = c + '\t'
      txt += c
    } else txt += '\t'
    if (objJSON[i].StreamURL) {
      c = objJSON[i].StreamURL
      txt += c
    } else txt += '\t'
    txt += '\n'
  }
  uploadTextFile('stations.csv', txt)
  updateStationlist()
}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
function loadGridFileFromSD () { // load from SD
  var XLrowObject
  var rawFile = new XMLHttpRequest()
  rawFile.open('POST', '/SD/stations.csv', true)
  rawFile.onreadystatechange = function () {
    if (rawFile.readyState === 4) {
      var rawdata = rawFile.responseText
      var workbook = XLSX.read(rawdata, {
        raw: true,
        type: 'string',
        cellDates: false,
        cellText: true
      })
      workbook.SheetNames.forEach(function (sheetName) {
        XLrowObject = XLSX.utils.sheet_to_row_object_array(workbook.Sheets[sheetName])
      })
      var strJSON = JSON.stringify(XLrowObject)
      var objJSON = JSON.parse(strJSON)
      $('#jsGrid').jsGrid({
        data: objJSON
      })
      updateStationlist()
    };
  }
  rawFile.send()
}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
function saveExcel () { // save xlsx to PC
  var wb = XLSX.utils.book_new()
  wb.Props = {
    Title: 'Stations',
    Subject: 'Stationlist',
    Author: 'MusicClock',
    CreatedDate: new Date('2018.10.10')
  }
  wb.SheetNames.push('Stations')
  var wsData = $('#jsGrid').jsGrid('option', 'data')
  var wscols = [{
    wch: 3
  }, // 'characters'
  {
    wch: 5
  }, // 'characters'
  {
    wch: 100
  }, // 'characters'
  {
    wch: 150
  }  // 'characters'
  ]
  var ws = XLSX.utils.json_to_sheet(wsData, {
    header: ['X', 'Cy', 'StationName', 'StreamURL']
  })
  ws['!cols'] = wscols
  wb.Sheets.Stations = ws

  var wbout = XLSX.write(wb, {
    bookType: 'xlsx',
    type: 'binary'
  })

  function s2ab (s) {
    var buf = new ArrayBuffer(s.length)
    var view = new Uint8Array(buf)
    for (var i = 0; i < s.length; i++) view[i] = s.charCodeAt(i) & 0xff
    return buf
  }
  saveAs(
    new Blob([s2ab(wbout)], {
      type: 'application/octet-stream'
    }),
    'stations.xlsx'
  )
  updateStationlist()
}

var clients = [ // testdata
  {
    X: '*',
    Cy: 'D',
    StationName: 'Station',
    StreamURL: 'URL'
  }
]

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
function showExcelGrid () {
  $('#jsGrid').jsGrid({
    width: '100%',
    height: '432px',
    editing: true,
    sorting: true,
    paging: false,
    shrinkToFit: false,
    onItemDeleted: function (args) {
      updateStationlist()
    },
    onItemUpdated: function (args) {
      updateStationlist()
    },
    onItemInserted: function (args) {
      updateStationlist()
    },
    deleteConfirm: function (item) {
      return 'The entry ' + item.StationName + ' will be removed. Are you sure?'
    },
    rowClick: function (args) {
      showDetailsDialog('Edit', args.item)
    },
    data: clients,
    fields: [{
      name: 'X',
      type: 'text',
      width: 20,
      align: 'center'
    },
    {
      name: 'Cy',
      type: 'text',
      width: 25,
      align: 'center'
    },
    {
      name: 'StationName',
      type: 'text',
      width: 170
    },
    {
      name: 'StreamURL',
      type: 'text',
      width: 320
    },
    {
      type: 'control',
      modeSwitchButton: false,
      editButton: false,
      shrinkToFit: true,
      headerTemplate: function () {
        return $('<button>')
          .attr('type', 'button')
          .text('Add')
          .on('click', function () {
            showDetailsDialog('Add', {})
          })
      }
    }
    ]
  })
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
var showDetailsDialog = function (dialogType, client) { // popUp window
  $('#txtX').val(client.X)
  $('#txtCy').val(client.Cy)
  $('#txtStationName').val(client.StationName)
  $('#txtStreamURL').val(client.StreamURL)
  var divdialog = $('#dialog')
  $('#dialog').attr('title', 'Edit')
  $('#dialog').dialog({
    width: 505,
    resizable: false,
    show: 'fade',
    modal: false,
    buttons: {
      OK: function () {
        client.X = $('#txtX').val()
        client.Cy = $('#txtCy').val()
        client.StationName = $('#txtStationName').val()
        client.StreamURL = $('#txtStreamURL').val()
        includeStation(client, dialogType === 'Add')
        $(this).dialog('close')
        console.log('dialog saved')
      }
    }
  })
  divdialog.dialog()
  console.log('dialog opened')
}

var includeStation = function (client, isNew) {
  $.extend(client, {
    X: $('#txX').val(),
    Cy: $('#txtCy').val(),
    StationName: $('#txtStationName').val(),
    StreamURL: $('#txtStreamURL').val()
  })

  $('#jsGrid').jsGrid(isNew ? 'insertItem' : 'updateItem', client)
  $('#detailsDialog').dialog('close')
}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
function loadDataExcel (event) { // load xlsx from PC
  var file = event[0]
  var reader = new FileReader()
  var excelData = []
  reader.onload = function (event) {
    var data = event.target.result
    var workbook = XLSX.read(data, {
      type: 'binary'
    })
    workbook.SheetNames.forEach(function (sheetName) {
      // Here is your object
      var XLrowObject = XLSX.utils.sheet_to_row_object_array(
        workbook.Sheets[sheetName]
      )

      for (var i = 0; i < XLrowObject.length; i++) {
        excelData.push(XLrowObject[i]['your column name'])
      }

      var strJSON = JSON.stringify(XLrowObject)
      var objJSON = JSON.parse(strJSON)
      // alert(strJSON);
      $('#jsGrid').jsGrid({
        data: objJSON
      })
      updateStationlist()
    })
  }
  $('#file').val('') // allow load twice
  reader.onerror = function (ex) {
    console.log(ex)
  }

  reader.readAsBinaryString(file)
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
function updateStationlist () { // select in tab Radio
  var opt, select
  var wsData = $('#jsGrid').jsGrid('option', 'data')
  var strJSON = JSON.stringify(wsData)
  var objJSON = JSON.parse(strJSON)
  console.log(wsData.length)
  select = document.getElementById('preset') // Radio: show stationlist
  select.options.length = 1
  var j = 1
  for (var i = 0; i < wsData.length; i++) {
    if (objJSON[i].X !== '*') {
      if (j < 1000) {
        opt = document.createElement('OPTION')
        opt.text = (('000' + j).slice(-3) + ' - ' + objJSON[i].StationName)
        select.add(opt)
      }
      j++
    }
  }
}

// ----------------------------------- TAB AUDIO PLAYER ------------------------------------

function trackreq (presctrl) { // Audio Player: select audio title from track list
  if (presctrl.value !== '-1') {
    httpGet('audiotrack=' + presctrl.value, 3)
  }
}

function getAudioFileList(val){
  content =JSON.parse(val)
  var select = document.getElementById('seltrack')
  select.options.length = 0;
  var fileNames = val.split(",")
  for (i = -1; i < (fileNames.length); i++) {
    opt = document.createElement('OPTION')
    if(i == -1){
      opt.value = ""
      opt.text =  "select a file here"
    }
    else{
      console.log(content[i].name)
      opt.value = content[i].name
      opt.text =  content[i].name
    }
    select.add(opt)
  }
}

// ----------------------------------- TAB Search Stations ------------------------------------

// global var
var countryallstations
var category

function addStationsToGrid () {
  showDetailsDialog('Add', {})
  $('#txtStreamURL').val($('#streamurl').val())
  $('#txtStationName').val($('#stationname').val())
}

function loadJSON (path, success, error) {
  console.log(path)
  var xhr = new XMLHttpRequest()
  xhr.onreadystatechange = function () {
    if (xhr.readyState === 4) {
      if (xhr.status === 200) {
        success(JSON.parse(xhr.responseText))
      } else {
        error(xhr)
      }
    }
  }
  xhr.open('GET', path, true)
  xhr.send()
}

function selectcategory (presctrl) { // tab Search: preset, select a category
  if(presctrl.value == "bycountry")  {loadJSON('https://de1.api.radio-browser.info/json/countries', gotItems, 'jsonp'); category="country"}
  if(presctrl.value == "bylanguage") {loadJSON('https://de1.api.radio-browser.info/json/languages', gotItems, 'jsonp'); category="language"}
  if(presctrl.value == "bytag")      {loadJSON('https://de1.api.radio-browser.info/json/tags',      gotItems, 'jsonp'); category="tag"}
}

function selectitem (presctrl) { // tab Search: preset, select a station
  if(category == "country")  loadJSON('https://de1.api.radio-browser.info/json/stations/bycountry/'  + presctrl.value, gotStations, 'jsonp')
  if(category == "language") loadJSON('https://de1.api.radio-browser.info/json/stations/bylanguage/' + presctrl.value, gotStations, 'jsonp')
  if(category == "tag")      loadJSON('https://de1.api.radio-browser.info/json/stations/bytag/'      + presctrl.value, gotStations, 'jsonp')
}

function gotItems (data) { // fill select countries
  var select = document.getElementById('item')
  var opt
  select.options.length = 1
  for (var i = 0; i < data.length; i++) {
    if (i < 2) continue
    opt = document.createElement('OPTION')
    opt.text = data[i].name
    select.add(opt)
  }
  console.log(data.uuid)
  var stations = document.getElementById('stations') // set stations to default
  stations.options.length = 1
}

function gotStations (data) { // fill select stations
  var select = document.getElementById('stations')
  var opt
  select.options.length = 1
  for (var i = 0; i < data.length; i++) {
    opt = document.createElement('OPTION')
    opt.text = data[i].name
    opt.value = i
    select.add(opt)
  }
  countryallstations = data
}

function selectstation () { // select a station
  var e = document.getElementById('stations')
  var value = e.options[e.selectedIndex].value
  var sturl = countryallstations[value].url
  console.log(value)
  console.log(sturl)
  var f = document.getElementById('streamurl')
  f.value = sturl
  var g = document.getElementById('favicon')
  var favi = countryallstations[value].favicon
  g.value = favi
  var h = document.getElementById('homepageurl')
  h.value = countryallstations[value].homepage
  scaleCanvasImage(favi)
  var j = document.getElementById('stationname')
  j.value = countryallstations[value].name
}

function teststreamurl () { // Search: button play - enter a url to play from
  var theUrl = '/stationURL?' + streamurl.value + '&version=' + Math.random()
  var xhr = new XMLHttpRequest()
  xhr.onreadystatechange = function () {
    if (xhr.readyState === XMLHttpRequest.DONE) {}
  }
  xhr.open('GET', theUrl, true)
  xhr.send()
}

function scaleCanvasImage (url) {
  var canvas = document.getElementById('canvas')
  var ctx = canvas.getContext('2d')
  var src
  ctx.beginPath()
  ctx.rect(0, 0, canvas.width, canvas.height)
  ctx.fillStyle = 'white'
  ctx.fill()
  var co = 'https://api.codetabs.com/v1/proxy?quest='
  src = co + url
  var imgObj = new Image()
  imgObj.crossOrigin = 'anonymous'
  imgObj.src = src

  imgObj.onload = function() {
    var imgWidth = imgObj.width
    var imgHeight = imgObj.height
    var scaleX = 1
    var scaleY = 1
    if (imgWidth > canvas.width) scaleX = canvas.width / imgWidth
    if (imgHeight > canvas.height) scaleY = canvas.height / imgHeight
    var scale = scaleY
    if (scaleX < scaleY) scale = scaleX
    if (scale < 1) {
      imgHeight = imgHeight * scale
      imgWidth = imgWidth * scale
    }
    var dx = (canvas.width - imgWidth) / 2
    var dy = (canvas.height - imgHeight) / 2
    ctx.drawImage(imgObj, 0, 0, imgObj.width, imgObj.height, dx, dy, imgWidth, imgHeight)
  }

}

function refreshCanvas () {
  var g = document.getElementById('favicon')
  scaleCanvasImage(g.value)
  console.log('refresh')
}

function uploadCanvasImage () {
  var filename
  var sn = document.getElementById('stationname')
  if (sn.value !== '') filename = sn.value + '.jpg'
  else {
    alert('no stationname given')
    return
  }
  var canvas = document.getElementById('canvas')
  var dataURL = canvas.toDataURL('image/jpeg')
  document.getElementById('hidden_data').value = dataURL
  var fd = new FormData(document.forms.form1)
  var theUrl = '/uploadfile?' + filename + '&version=' + Math.random()
  var xhr = new XMLHttpRequest()
  xhr.open('POST', theUrl, true)

  xhr.upload.onprogress = function (e) {
    if (e.lengthComputable) {
      var percentComplete = (e.loaded / e.total) * 100
      console.log(percentComplete + '% uploaded')
    }
  }
  xhr.onload = function () {
  }
  xhr.onreadystatechange = function () { // Call a function when the state changes.
    if (xhr.readyState === 4) {
      if (xhr.responseText === 'OK') alert(filename + ' successfully uploaded')
      else alert(filename + ' not uploaded')
    }
  }
  xhr.send(fd)
}

function downloadCanvasImage () {
  var filename
  var sn = document.getElementById('stationname')
  if (sn.value !== '') filename = sn.value + '.jpg'
  else filename = 'myimage.jpg'
  var lnk = document.createElement('a')
  var e // create an 'off-screen' anchor tag
  lnk.download = filename // the key here is to set the download attribute of the a tag
  lnk.href = canvas.toDataURL('image/jpeg')
  if (document.createEvent) { // create a 'fake' click-event to trigger the download
    e = document.createEvent('MouseEvents')
    e.initMouseEvent('click', true, true, window, 0, 0, 0, 0, 0, false, false, false, false, 0, null)
    lnk.dispatchEvent(e)
  } else if (lnk.fireEvent) {
    lnk.fireEvent('onclick')
  }
}
// -------------------------------------- TAB Info ---------------------------------------
function getnetworks () { // tab Config: load the connected WiFi network
  var i, select, opt, networks
  var theUrl = '/getnetworks?' + '&version=' + Math.random()
  var xhr = new XMLHttpRequest()
  select = document.getElementById('ssid') // Radio: show stationlist
  xhr.onreadystatechange = function () {
    if (xhr.readyState === XMLHttpRequest.DONE) {
      networks = xhr.responseText.split('\n')
      for (i = 0; i < (networks.length); i++) {
        opt = document.createElement('OPTION')
        opt.value = i
        console.log(networks[i])
        opt.text = networks[i]
        select.add(opt)
      }
    }
  }
  xhr.open('GET', theUrl, true)
  xhr.send()
}
/* eslint-enable no-unused-vars, no-undef */



</script>

</body>
</html>

)=====" ;
#endif /* INDEX_H_ */
