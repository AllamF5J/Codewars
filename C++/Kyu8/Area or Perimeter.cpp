/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/5ab6538b379d20ad880000ab
| @description    : You are given the length and width of a 4-sided polygon. The polygon can either be a rectangle or a square.
|                   If it is a square, return its area. If it is a rectangle, return its perimeter.
|
|                   Function Signature:
|                   - int area_or_perimeter(int l, int w);
|
|                   Example:
|                   - area_or_perimeter(6, 10); // returns 32
|                   - area_or_perimeter(3, 3);  // returns 9
|
|                   Note:
|                   - For the purposes of this kata, you will assume that it is a square if its length and width are equal, otherwise it is a rectangle.
|_______________________________________________________________________________
*/
int area_or_perimeter(int l, int w) {
  return l == w ? l * w : 2 * (l + w);
}
