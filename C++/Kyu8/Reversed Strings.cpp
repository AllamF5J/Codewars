/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5168bb5dfe9a00b126000018
| @description    : Complete the solution so that it reverses the string passed
|                   into it.
|
|                   Examples:
|                   - 'world'  =>  'dlrow'
|                   - 'word'   =>  'drow'
|_______________________________________________________________________________
*/
#include <string>

std::string reverseString(std::string str)
{
  reverse(str.begin(), str.end());
  return str;
}