var x = 5;
var fill = "";

function starPyramid(){
	for (let i = 1; i <= x; i++) {
	  for (let j = 1; j <= x - i; j++) {
	    fill += " ";
	  }
	  for (let k = 0; k < 2 * i - 1; k++) {
	    fill += "*";
	  }
	  fill += "\n";
	}
	return fill;
}

console.log(starPyramid());
