/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/57eae20f5500ad98e50002c5
| @description    : Write a function that removes the spaces from the string,
|                   then return the resultant string.
|
|                   Examples:
|                   - Input: "8 j 8   mBliB8g  imjB8B8  jl  B"
|                     Output: "8j8mBliB8gimjB8B8jlB"
|                   - Input: "8 8 Bi fk8h B 8 BB8B B B  B888 c hl8 BhB fd"
|                     Output: "88Bifk8hB8BB8BBBB888chl8BhBfd"
|                   - Input: "8aaaaa dddd r     "
|                     Output: "8aaaaaddddr"
|
|                   For C and Nasm, you must return a new dynamically allocated string.
|_______________________________________________________________________________
*/
#include <string>

std::string no_space(const std::string &x)
{
  std::string newX;
  for (int x : x)
    if (isspace(x))
      continue;
    else
      newX += x;
  return newX;
}