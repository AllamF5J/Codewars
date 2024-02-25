/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/56b29582461215098d00000f
| @description    : Given a list of unique numbers sorted in ascending order,
|                   return a new list so that the values increment by 1 for
|                   each index from the minimum value up to the maximum value
|                   (both included).
|
|                   Example:
|                   - Input:  1,3,5,6,7,8
|                   - Output: 1,2,3,4,5,6,7,8
|_______________________________________________________________________________
*/
#include <vector>

std::vector<int> pipe_fix(const std::vector<int> &nums)
{
  std::vector<int> newNums;
  for (int i = nums.at(0); i <= nums.at(nums.size() - 1); ++i)
    newNums.push_back(i);
  return newNums;
}