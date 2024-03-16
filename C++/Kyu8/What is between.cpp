/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/55ecd718f46fba02e5000029
| @description    : Complete the function that takes two integers (a, b, where
|                   a < b) and returns an array of all integers between the
|                   input parameters, including them.
|
|                   For example:
|                   a = 1
|                   b = 4
|                   --> [1, 2, 3, 4]
|_______________________________________________________________________________
*/
#include <vector>

std::vector<int> between(int start, int end)
{
  std::vector<int> newN;
  for (int i = start; i <= end; ++i)
    newN.push_back(i);
  return newN;
}