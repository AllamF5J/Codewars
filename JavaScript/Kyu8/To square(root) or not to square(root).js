/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/57f6ad55cca6e045d2000627
| @description    : Write a method that processes each number in the input array.
|                   - If a number has an integer square root, replace it with the square root.
|                   - Otherwise, square the number.
|                   Example:
|                   Input: [4, 3, 9, 7, 2, 1]
|                   Output: [2, 9, 3, 49, 4, 1]
|                   Notes: The input array will always contain only positive numbers,
|                   and will never be empty or null.
|_______________________________________________________________________________
*/
function squareOrSquareRoot(array) {
  return array.map((element) => {
    return Math.sqrt(element) % 1 === 0 ? Math.sqrt(element) : Math.pow(element, 2);
  });
}
