/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/57a0885cbb9944e24c00008e
| @description    : Write function RemoveExclamationMarks which removes all
|                   exclamation marks from a given string.
|_______________________________________________________________________________
*/
#include <string>

std::string removeExclamationMarks(std::string str)
{
  std::string newStr;
  for (int i = 0; i < str.size(); ++i)
    if (str[i] == '!')
      continue;
    else
      newStr += str[i];
  return newStr;
}