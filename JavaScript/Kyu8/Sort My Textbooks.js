/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/5a07e5b7ffe75fd049000051
| @description    : Help sort a list of textbooks by subject in a case-insensitive
|                   manner. The sorting should not be case sensitive, so all 
|                   comparisons should be done in lowercase.
|                   Example:
|                   Input: ["Math", "science", "english", "History"]
|                   Output: ["english", "History", "Math", "science"]
|                   Notes: The sorting should correctly handle different cases and 
|                   sort the list alphabetically.
|_______________________________________________________________________________
*/
function sorter(textbooks) {
  return textbooks.sort((a, b) => {
    const aLower = a.toLowerCase();
    const bLower = b.toLowerCase();

    if (aLower < bLower) return -1;
    if (aLower > bLower) return 1;
    return 0;
  });
}
