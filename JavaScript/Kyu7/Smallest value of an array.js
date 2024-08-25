/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/544a54fd18b8e06d240005c0
| @description    : Given an array and a string parameter, return either the smallest 
|                   value in the array or the index of that smallest value, based on 
|                   the string parameter.
|                   - If the string is "value", return the smallest value in the array.
|                   - If the string is "index", return the index of the smallest value.
|                   Examples:
|                   min([1,2,3,4,5], 'value')  // Returns 1
|                   min([1,2,3,4,5], 'index')  // Returns 0
|_______________________________________________________________________________
*/
function min(arr, toReturn) {
  return toReturn === "value" ? Math.min(...arr) : arr.indexOf(Math.min(...arr));
}
