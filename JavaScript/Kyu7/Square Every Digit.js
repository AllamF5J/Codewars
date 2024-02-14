/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://codewars.com/kata/546e2562b03326a88e000020
| @description    : Welcome. In this kata, you are asked to square every digit
|                   of a number and concatenate them.
|_______________________________________________________________________________
*/
function squareDigits(num){
  let string = num.toString(); 
  let results = [];             
  for (let i = 0; i < string.length; i++){  
      results[i] = string[i] * string[i];    
  }
  return Number(results.join(''));
}
