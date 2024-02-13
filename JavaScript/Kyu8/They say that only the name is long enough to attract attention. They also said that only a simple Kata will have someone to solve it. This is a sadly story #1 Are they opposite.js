/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/574b1916a3ebd6e4fa0012e7/javascript
| @description    : Given two strings 's1' and 's2', the function checks if they
|                   are opposites. Opposites mean that all letters in the two
|                   strings are the same, but the case is opposite.
|_______________________________________________________________________________
*/
function isOpposite(s1, s2) {
  let str = '';
  if (s1.length != s2.length || s1.length == 0 || s2.length == 0) return false;
  for (let i = 0; i < s1.length; i++) {
    s1[i] === s1[i].toUpperCase() ?
      str += s1[i].toLowerCase() :
      str += s1[i].toUpperCase();
  }
  return str === s2;
}
