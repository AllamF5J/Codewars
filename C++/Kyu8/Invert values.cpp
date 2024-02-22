/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5899dc03bc95b1bf1b0000ad
| @description    : Given a set of numbers, return the additive inverse of each.
|                   Each positive becomes negatives, and the negatives become positives.
|
|                   Example:
|                   invert([1,2,3,4,5]) == [-1,-2,-3,-4,-5]
|                   invert([1,-2,3,-4,5]) == [-1,2,-3,4,-5]
|                   invert([]) == []
|_______________________________________________________________________________
*/
#include <vector>

std::vector<int> invert(std::vector<int> values)
{
  std::vector<int> newValues;
  for (int x : values)
    newValues.push_back(-x);
  return newValues;
}