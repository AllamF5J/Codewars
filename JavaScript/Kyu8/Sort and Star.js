/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/57cfdf34902f6ba3d300001e
| @description    : Given a list of strings, sort it alphabetically (case-sensitive)
|                   based on the ASCII values of the characters, and return the first
|                   value in the sorted list. The returned value should have "***" 
|                   inserted between each of its letters.
|                   Example:
|                   Input: ["bitcoin", "apple", "banana"]
|                   Output: "a***p***p***l***e"
|                   Notes: The sorting is case-sensitive and the first value is returned
|                   as a string with "***" between each character.
|_______________________________________________________________________________
*/
function twoSort(s) {
  return s.sort()[0].split("").join("***");
}
