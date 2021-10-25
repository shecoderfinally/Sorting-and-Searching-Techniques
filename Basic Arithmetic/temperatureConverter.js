// Temperature Convert Program Celsius to Fahrenheit 
function temperatureConverter(valNum) {
  valNum = parseFloat(valNum);
  document.getElementById("outputFahrenheit").innerHTML = (valNum * 1.8) + 32;
}
