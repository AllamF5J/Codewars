/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5b853229cfde412a470000d0
| @description    : Your function takes two arguments:
|                   - current father's age (years)
|                   - current age of his son (years)
|
|                   Calculate how many years ago the father was twice as old
|                   as his son (or in how many years he will be twice as old).
|                   The answer is always greater or equal to 0, no matter if
|                   it was in the past or it is in the future.
|_______________________________________________________________________________
*/
int twice_as_old(int dad, int son) 
{
  return dad >= 2 * son ? dad - 2 * son : 2 * son - dad;
}