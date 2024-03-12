/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5715eaedb436cf5606000381
| @description    : You get an array of numbers, return the sum of all of the
|                   positives ones.
|
|                   Example:
|                   - [1,-4,7,12] => 1 + 7 + 12 = 20
|
|                   Note: if there is nothing to sum, the sum is default to 0.
|_______________________________________________________________________________
*/
#include <vector>

int positive_sum(const std::vector<int> arr)
{
  int y = 0;
  for (int x : arr)
    if (x > 0)
      y += x;
  return y;
}