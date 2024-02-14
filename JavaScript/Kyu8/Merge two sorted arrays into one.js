/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5899642f6e1b25935d000161
| @description    : Given two sorted arrays, arr1 and arr2, the function merges
|                   them into a single array, sorts it in ascending order, and
|                   removes any duplicate elements.
|_______________________________________________________________________________
*/
function mergeArrays(arr1, arr2) {
  let newArr = arr1.concat(arr2);
  let sortedArr = newArr.sort((a, b) => a - b);
  let set = [...new Set(sortedArr)];
  return set;
}
