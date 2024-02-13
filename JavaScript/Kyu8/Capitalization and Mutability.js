/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/595970246c9b8fa0a8000086
| @description    : Capitalize the first letter of a given word.
|_______________________________________________________________________________
*/
function capitalizeWord(word) {
  let newWord = word[0].toUpperCase() + word.slice(1);
  return newWord;
}
