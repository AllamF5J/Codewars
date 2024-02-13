/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5b73fe9fb3d9776fbf00009e
| @description    : Given an array 'arr', the function calculates the sum of
|                   differences between consecutive pairs in descending order.
|_______________________________________________________________________________
*/
function sumOfDifferences(arr) {
  const sorted = arr.sort((a, b) => b - a);
  let sum = 0;
  
  for (let i = 1; i < sorted.length; i++) {
    sum += sorted[i - 1] - sorted[i];
  }
  return sum;
}
