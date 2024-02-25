/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/555a67db74814aa4ee0001b5
| @description    : Create a function that checks if a given number is even or
|                   not. The function should return true if the number is even
|                   and false otherwise. Numbers can be positive or negative,
|                   integers or floats. Floats with a decimal part not equal to
|                   zero are considered uneven for this kata.
|
|                   Example:
|                   is_even(4)       => true
|                   is_even(7)       => false
|                   is_even(-2.5)    => false
|_______________________________________________________________________________
*/
#include <cmath>

bool is_even(double n)
{
  return fmod(n, 2) == 0;
}