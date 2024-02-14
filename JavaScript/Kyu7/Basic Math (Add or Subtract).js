/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5809b62808ad92e31b000031
| @description    : In this kata, you will do addition and subtraction on a given
|                   string. The return value must also be a string.
|_______________________________________________________________________________
*/
function calculate(str) {
  return eval(str.replace(/plus/gi, '+').replace(/minus/gi, '-')).toString();
}
