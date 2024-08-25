/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/52bc74d4ac05d0945d00054e
| @description    : Find the first non-repeating letter in a string. Upper- and 
|                   lowercase letters are treated as the same, but the function 
|                   should return the correct case for the initial letter. If all 
|                   characters are repeating, return an empty string.
|                   Examples:
|                   firstNonRepeatingLetter('stress') => 't'
|                   firstNonRepeatingLetter('sTreSS') => 'T'
|                   firstNonRepeatingLetter('aabbcc') => ''
|_______________________________________________________________________________
*/
const firstNonRepeatingLetter = s => {
  const index = s
    .toLowerCase()
    .split('')
    .findIndex((char, _, s) => s.indexOf(char) === s.lastIndexOf(char))

  return index === -1 ? '' : s[index]
}

module.exports = firstNonRepeatingLetter