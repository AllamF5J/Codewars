/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/5a2be17aee1aaefe2a000151
| @description    : I'm new to coding and now I want to get the sum of two arrays...
|                   Actually the sum of all their elements. I'll appreciate for your help.
|
|                   Function Signature:
|                   - int arrayPlusArray(std::vector<int> a, std::vector<int> b);
|
|                   Example:
|                   - arrayPlusArray({1, 2, 3}, {4, 5, 6}); // returns 21
|
|                   Note:
|                   - Each array includes only integer numbers. Output is a number too.
|_______________________________________________________________________________
*/
#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int total = 0;
  for (int i : a) total += i;
  for (int i : b) total += i;
  return total;
}
