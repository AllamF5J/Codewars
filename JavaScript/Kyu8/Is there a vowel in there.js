/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/57cff961eca260b71900008f
| @description    : Given an array of numbers, check if any of the numbers are the character
|                   codes for lower case vowels (a, e, i, o, u). If they are, change the
|                   array value to the corresponding vowel character. Return the resulting array.
|                   Example:
|                   Input: [97, 98, 99, 105]
|                   Output: ['a', 98, 99, 'i']
|_______________________________________________________________________________
*/
function isVow(a) {
  let vowels = { 'a': 97, 'e': 101, 'i': 105, 'o': 111, 'u': 117 };
  return a.map((ele) => {
    return Object.values(vowels).includes(ele) ? Object.keys(vowels).find(key => vowels[key] === ele) : ele;
  });
}
