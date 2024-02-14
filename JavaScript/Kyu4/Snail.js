/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/521c2db8ddc89b9b7a0000c1
| @description    : Snail Sort
|                   Given an n x n array, return the array elements arranged
|                   from outermost elements to the middle element, traveling
|                   clockwise.
|_______________________________________________________________________________
*/
function snail(array) {
  var vector = [];
  while (array.length) {
    vector.push(...array.shift());
    array.map(row => vector.push(row.pop()));
    array.reverse().map(row => row.reverse());
  }
  return vector;
}
