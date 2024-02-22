/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5b077ebdaf15be5c7f000077
| @description    : If you can't sleep, just count sheep!!
|
|                   Task:
|                   Given a non-negative integer, 3 for example, return a string
|                   with a murmur: "1 sheep...2 sheep...3 sheep...". Input will
|                   always be valid, i.e. no negative integers.
|_______________________________________________________________________________
*/
#include <string>

std::string countSheep(int number)
{
  std::string newNumber;
  for (int i = 1; i <= number; ++i)
    newNumber += std::to_string(i) + " sheep...";
  return newNumber;
}