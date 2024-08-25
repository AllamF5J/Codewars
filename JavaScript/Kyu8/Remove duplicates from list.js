/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/57a5b0dfcf1fa526bb000118
| @description    : Define a function that removes duplicates from an array of non-negative
|                   numbers and returns the result. The order of the sequence must stay the same.
|                   Examples:
|                   Input -> Output
|                   [1, 1, 2] -> [1, 2]
|                   [1, 2, 1, 1, 3, 2] -> [1, 2, 3]
|_______________________________________________________________________________
*/
function distinct(a) {
  return [...new Set(a)];
}
