/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/515e271a311df0350d00000f
| @description    : Complete the square sum function so that it squares each
|                   number passed into it and then sums the results together.
|
|                   For example, for [1, 2, 2] it should return 9 because
|                   1^2 + 2^2 + 2^2 = 9.
|_______________________________________________________________________________
*/
#include <vector>
#include <cmath>

int square_sum(const std::vector<int> &numbers)
{
  int x = 0;
  for (int i : numbers)
  {
    x += pow(i, 2);
  }
  return x;
}