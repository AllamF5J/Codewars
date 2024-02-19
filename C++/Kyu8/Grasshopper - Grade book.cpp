/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/55cbd4ba903825f7970000f5
| @description    : Grade book
|                   Complete the function so that it finds the average of the
|                   three scores passed to it and returns the letter value
|                   associated with that grade.
|
|                   Numerical Score    Letter Grade
|                   90 <= score <= 100  'A'
|                   80 <= score < 90    'B'
|                   70 <= score < 80    'C'
|                   60 <= score < 70    'D'
|                   0 <= score < 60     'F'
|
|                   Tested values are all between 0 and 100. There's no need to
|                   check for negative values or values greater than 100.
|_______________________________________________________________________________
*/
char getGrade(int a, int b, int c)
{
  int ave = (a + b + c) / 3;
  return ave <= 100 && ave >= 90 ? 'A'
         : ave < 90 && ave >= 80 ? 'B'
         : ave < 80 && ave >= 70 ? 'C'
         : ave < 70 && ave >= 60 ? 'D'
                                 : 'F';
}