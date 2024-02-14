/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/57126304cdbf63c6770012bd
| @description    : Given a string s, this function returns true if it's a valid
|                   single integer or floating number, and false otherwise.
|_______________________________________________________________________________
*/
function isDigit(s) {
  return s == parseFloat(s);
}
