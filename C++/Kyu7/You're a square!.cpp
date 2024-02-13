/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/54c27a33fb7da0db0100040e
| @description    : Determine if an integral number is a perfect square.
|                   A perfect square is the product of some integer with itself.
|_______________________________________________________________________________
*/
#include <cmath>

bool is_square(int n)
{
  return fmod(sqrt(n), 1) == 0;
}
