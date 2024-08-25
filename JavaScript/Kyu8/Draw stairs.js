/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/5b4e779c578c6a898e0005c5
| @description    : Draw a staircase pattern using the letter "I". The staircase 
|                   should be `n` steps tall and `n` steps wide, with the tallest 
|                   step in the top left and the rest following in a diagonal pattern.
|                   Each step should be indented by increasing spaces.
|                   Example:
|                   Input: 3
|                   Output:
|                   I
|                    I
|                     I
|                   Example:
|                   Input: 7
|                   Output:
|                   I
|                    I
|                     I
|                      I
|                       I
|                        I
|                         I
|                   Notes: The output should be a string with newline characters 
|                   separating each step, and should not have trailing whitespace.
|_______________________________________________________________________________
*/
function drawStairs(n) {
  let stairs = '';
  for (let i = 0; i < n; i++) {
    stairs += ' '.repeat(i) + 'I\n';
  }
  return stairs.trim();
}
