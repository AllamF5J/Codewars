/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7
| @description    : Write a function which converts the input string to uppercase.
|_______________________________________________________________________________
*/
#include <string>
#include <cctype>

std::string makeUpperCase (const std::string& input_str)
{
  std::string newValues;
  for(int x : input_str)
    newValues += toupper(x);
  return newValues;
}