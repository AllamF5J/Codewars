/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/58f8a3a27a5c28d92e000144
| @description    : Find the first element in an array that is not consecutive.
|                   An element is considered not consecutive if it is not exactly
|                   1 larger than the previous element in the array. If all elements
|                   are consecutive, return null.
|                   Example:
|                   Input: [1, 2, 3, 4, 6, 7, 8]
|                   Output: 6
|                   Notes: The array will always have at least 2 elements. All elements
|                   will be numbers and unique. The numbers could be positive or negative.
|_______________________________________________________________________________
*/
const firstNonConsecutive = arr => 
  arr.length == 1 ? null : arr[0] + 1 != arr[1] ? arr[1] : firstNonConsecutive(arr.slice(1));
