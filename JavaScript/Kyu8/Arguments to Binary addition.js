/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/57642a90dee2da8dd3000161
| @description    : Given an array, add all the number elements and return the binary
|                   equivalent of that sum. Non-numeric elements should be treated as 0
|                   since they can't be added. If the array is empty, return '0'.
|                   Examples:
|                   arr2bin([1,2]) == '11'
|                   arr2bin([1,2,'a']) == '11'
|                   arr2bin([]) == '0'
|                   NOTE: NaN is a number too in JavaScript for decimal, binary, and n-ary base.
|_______________________________________________________________________________
*/
function arr2bin(arr) {
  return arr.reduce((a, c) => typeof c === 'number' ? a + c : a, 0).toString(2);
}