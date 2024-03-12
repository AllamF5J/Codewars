/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5bb904724c47249b10000131
| @description    : Our football team has finished the championship.
|
|                   Our team's match results are recorded in a collection of
|                   strings. Each match is represented by a string in the format
|                   "x:y", where x is our team's score and y is our opponent's
|                   score.
|
|                   Points are awarded for each match as follows:
|                   - if x > y: 3 points (win)
|                   - if x < y: 0 points (loss)
|                   - if x = y: 1 point (tie)
|
|                   We need to write a function that takes this collection and
|                   returns the number of points our team (x) got in the
|                   championship by the rules given above.
|
|                   Notes:
|                   - Our team always plays 10 matches in the championship.
|                   - 0 <= x <= 4
|                   - 0 <= y <= 4
|_______________________________________________________________________________
*/

int points(const std::array<std::string, 10> &games)
{
  int result = 0;
  for (int i = 0; i < 10; ++i)
  {
    if (games[i][0] > games[i][2])
    {
      result += 3;
    }
    else if (games[i][0] == games[i][2])
    {
      result += 1;
    }
  }
  return result;
}