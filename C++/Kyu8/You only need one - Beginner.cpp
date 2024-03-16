/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/57cc975ed542d3148f00015b
| @description    : You will be given an array a and a value x. All you need
|                   to do is check whether the provided array contains the value.
|
|                   Array can contain numbers or strings. X can be either.
|
|                   Return true if the array contains the value, false if not.
|_______________________________________________________________________________
*/
#include <vector>
#include <string>

bool check(const std::vector<std::string> &seq, const std::string &elem)
{
  for (std::string x : seq)
  {
    if (x == elem)
    {
      return true;
    }
  }
  return false;
}