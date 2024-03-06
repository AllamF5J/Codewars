/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/51c8991dee245d7ddf00000e
| @description    : Complete the solution so that it reverses all of the words
|                   within the string passed in.
|
|                   Words are separated by exactly one space, and there are no
|                   leading or trailing spaces.
|
|                   Example (Input --> Output):
|                   - "The greatest victory is that which requires no battle"
|                     --> "battle no requires which that is victory greatest The"
|_______________________________________________________________________________
*/
#include <string>

std::string reverse_words(const std::string &str)
{
  std::string newStr = "";
  std::string temporary = "";
  for (int i = 0; i < str.length(); ++i)
    if (str[i] == ' ')
    {
      newStr = temporary + " " + newStr;
      temporary = "";
    }
    else
    {
      temporary += str[i];
    }
  newStr = temporary + " " + newStr;
  newStr.pop_back();
  return newStr;
}