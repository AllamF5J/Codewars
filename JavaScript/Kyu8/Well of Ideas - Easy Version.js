/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/57f222ce69e09c3630000212
| @description    : Check the provided array (x) for 'good' and 'bad' ideas.
|                   - If there are one or two 'good' ideas, return 'Publish!'.
|                   - If there are more than two 'good' ideas, return 'I smell a series!'.
|                   - If there are no 'good' ideas, return 'Fail!'.
|                   Example:
|                   Input: ['good', 'bad', 'good']
|                   Output: 'Publish!'
|_______________________________________________________________________________
*/
function well(x) {
  let checker = 0;
  x.map((x) => {
    return x === 'good' ? checker += 1 : 0;
  }).join("+");

  return checker === 0 ? "Fail!" : checker <= 2 ? "Publish!" : "I smell a series!";
}
