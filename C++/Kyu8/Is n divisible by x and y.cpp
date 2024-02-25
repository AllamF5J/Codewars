/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5545f109004975ea66000086
| @description    : Create a function that checks if a number n is divisible by
|                   two numbers x AND y. All inputs are positive, non-zero
|                   numbers.
|
|                   Examples:
|                   1) is_divisible(3, 1, 3)   => true  (3 is divisible by 1 and 3)
|                   2) is_divisible(12, 2, 6)  => true  (12 is divisible by 2 and 6)
|                   3) is_divisible(100, 5, 3) => false (100 is not divisible by 3)
|                   4) is_divisible(12, 7, 5)  => false (12 is neither divisible by 7 nor 5)
|_______________________________________________________________________________
*/
bool isDivisible(int n, int x, int y)
{
  return n % x == 0 && n % y == 0;
}