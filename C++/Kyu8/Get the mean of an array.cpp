/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/563e320cee5dddcf77000158
| @description    : It's the academic year's end, fateful moment of your school
|                   report. The averages must be calculated. All the students come
|                   to you and entreat you to calculate their average for them.
|                   Easy! You just need to write a script.
|
|                   Return the average of the given array rounded down to its
|                   nearest integer.
|
|                   The array will never be empty.
|_______________________________________________________________________________
*/

#include <vector>

int get_average(std::vector<int> marks)
{
  int totalScore = 0, averageScore = 0;
  for (int studentScore : marks)
    totalScore += studentScore;
  averageScore = totalScore / marks.size();
  return averageScore;
}