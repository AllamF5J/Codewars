/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/58dced7b702b805b200000be
| @description    : This series of katas will introduce you to basics of doing
|                   geometry with computers.
|
|                   Point objects have attributes x and y.
|
|                   Write a function calculating distance between Point a and Point b.
|
|                   Input coordinates fit in the range:
|                   -50 <= x, y <= 50
|
|                   Tests compare expected result and actual answer with a tolerance
|                   of 1e-6.
|_______________________________________________________________________________
*/

#include <cmath>

double distance_between_two_points(const Point &a, const Point &b)
{
  return sqrt(pow((a.y - b.y), 2) + pow((a.x - b.x), 2));
}