/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/59811fd8a070625d4c000013
| @description    : Create a function that finds the integral of the expression passed.
|
|                   In order to find the integral, all you need to do is add one to
|                   the exponent (the second argument), and divide the coefficient
|                   (the first argument) by that new number.
|
|                   For example, for 3x^2, the integral would be 1x^3: we added 1
|                   to the exponent, and divided the coefficient by that new number).
|
|                   Notes:
|                   - The output should be a string.
|                   - The coefficient and exponent are always positive integers.
|
|                   Examples:
|                   - 3, 2  -->  "1x^3"
|                   - 12, 5  -->  "2x^6"
|                   - 20, 1  -->  "10x^2"
|                   - 40, 3  -->  "10x^4"
|                   - 90, 2  -->  "30x^3"
|_______________________________________________________________________________
*/

#include <string>
std::string integrate(const int &coefficient, const int &exponent)
{
  return std::to_string(coefficient / (exponent + 1)) + "x^" + std::to_string(exponent + 1);
}