/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/5748838ce2fab90b86001b1a
| @description    : Complete the function that calculates the area of the red square, when the length of the circular arc A is given as the input. 
|                   Return the result rounded to two decimals.
|
|                   Function Signature:
|                   - double square_area(double A);
|
|                   Example:
|                   - square_area(4.0); // returns 1.62
|
|                   Note:
|                   - Use the π value provided in your language (Math::PI, M_PI, math.pi, etc)
|_______________________________________________________________________________
*/
#include <cmath>

double square_area(double A) {
  return round(pow((2 * A) / M_PI, 2) * 100) / 100;
}
