/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/55c28f7304e3eaebef0000da
| @description    : Unfinished Loop - Bug Fixing #1
|
|                   Oh no, Timmy's created an infinite loop! Help Timmy find
|                   and fix the bug in his unfinished for loop!
|_______________________________________________________________________________
*/
std::vector<int> createVector(const int n)
{
  std::vector<int> res;

  for (int i = 1; i <= n; ++i)
  {
    res.push_back(i);
  }

  return res;
}