/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/57f780909f7e8e3183000078
| @description    : Given a non-empty array of integers, return the result of multiplying the values together in order.
|_______________________________________________________________________________
*/
#include <vector>
int grow(std::vector<int> nums) {
  int result = 1;
  for(int x : nums)
    result *= x;
  return result;
}
