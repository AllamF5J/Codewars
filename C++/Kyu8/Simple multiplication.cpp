/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/583710ccaa6717322c000105
| @description    : This kata is about multiplying a given number by eight if
|                   it is an even number and by nine otherwise.
|_______________________________________________________________________________
*/
int simpleMultiplication(int a)
{
  return (a % 2 == 0) ? a * 8 : a * 9;
}