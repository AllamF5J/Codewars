/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/57cfdf34902f6ba3d300001e
| @description    : You will be given a list of strings. You must sort it
|                   alphabetically (case-sensitive, and based on the ASCII
|                   values of the chars) and then return the first value.
|
|                   The returned value must be a string and have "***" between
|                   each of its letters.
|
|                   You should not remove or add elements from/to the array.
|_______________________________________________________________________________
*/
#include <vector>
#include <string>
#include <algorithm>

std::string twoSort(std::vector<std::string> s)
{
  sort(s.begin(), s.end());
  std::string newS = s[0];
  for (int i = 1; i < newS.size(); i += 4)
    newS.insert(i, "***");
  return newS;
}