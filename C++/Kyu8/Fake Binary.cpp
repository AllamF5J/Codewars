/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/57eae65a4321032ce000002d
| @description    : Given a string of digits, you should replace any digit below 5
|                   with '0' and any digit 5 and above with '1'. Return the resulting string.
|
|                   Note: input will never be an empty string
|_______________________________________________________________________________
*/
#include <string>

std::string fakeBin(std::string str)
{
  std::string newStr;
  for (int x : str)
    if (x >= '5')
      newStr += '1';
    else
      newStr += '0';
  return newStr;
}