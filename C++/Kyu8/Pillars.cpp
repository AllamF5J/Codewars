/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5bb0c58f484fcd170700063d
| @description    : There are pillars near the road. The distance between the
|                   pillars is the same, and the width of the pillars is the
|                   same. Your function accepts three arguments:
|
|                   - Number of pillars (≥ 1);
|                   - Distance between pillars (10 - 30 meters);
|                   - Width of the pillar (10 - 50 centimeters).
|
|                   Calculate the distance between the first and the last pillar
|                   in centimeters (without the width of the first and last pillar).
|
|                   Constraints:
|                   - Number of pillars: ≥ 1
|                   - Distance between pillars: 10 - 30 meters
|                   - Width of the pillar: 10 - 50 centimeters
|_______________________________________________________________________________
*/
long pillars(int num_of_pillars, int distance, int width)
{
  return (num_of_pillars > 1) ? (distance * (num_of_pillars - 1) * 100 + width * (num_of_pillars - 2)) : 0;
}