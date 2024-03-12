/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5388f0e00b24c5635e000fc6
| @description    : I would like to be able to pass an array with two elements
|                   to my swapValues function to swap the values. However, it
|                   appears that the values aren't changing.
|
|                   Can you figure out what's wrong here?
|_______________________________________________________________________________
*/
#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values)
{
  return {values.second, values.first};
}