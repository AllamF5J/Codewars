/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/57cc40b2f8392dbf2a0003ce
| @description    : Check whether the provided array contains the value without using a loop.
|                   The array can contain numbers or strings, and the value can be either.
|                   Return true if the array contains the value, false if not. For strings,
|                   account for case sensitivity.
|_______________________________________________________________________________
*/
function check(a, x) {
  return a.includes(x);
}
