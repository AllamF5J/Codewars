/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/5a34b80155519e1a00000009
| @description    : Return a new array consisting of elements which are multiples of
|                   their own index in the input array (length > 1). An element is
|                   considered a multiple if it is divisible by its index or if it is 0.
|                   Example:
|                   Input: [22, -6, 32, 82, 9, 25]
|                   Output: [-6, 32, 25]
|                   Notes: Indexes are 0-based, so elements at index 0 are always included
|                   if they are 0.
|_______________________________________________________________________________
*/
function multipleOfIndex(array) {
  return array.filter((ele, index) => ele % index === 0 || ele === 0);
}
