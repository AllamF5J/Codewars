/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/573f5c61e7752709df0005d2
| @description    : Write a function that merges two sorted arrays into a single one.
|                   The arrays only contain integers. The final outcome must be sorted
|                   and should not have any duplicates.
|_______________________________________________________________________________
*/
function mergeArrays(a, b) {
  return [...new Set([...a, ...b].sort((x, y) => x - y))];
}