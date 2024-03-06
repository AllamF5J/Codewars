/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0
| @description    : It's pretty straightforward. Your goal is to create a
|                   function that removes the first and last characters of a
|                   string. You're given one parameter, the original string.
|                   You don't have to worry about strings with less than two
|                   characters.
|_______________________________________________________________________________
*/
#include <string>

std::string sliceString(std::string str)
{
  std::string x = "";
  for (int i = 1; i < str.size() - 1; ++i)
    x += str[i];
  return x;
}