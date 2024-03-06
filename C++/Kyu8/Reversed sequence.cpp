/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5a00e05cc374cb34d100000d
| @description    : Build a function that returns an array of integers from n
|                   to 1 where n > 0.
|
|                   Example: n=5 --> [5,4,3,2,1]
|_______________________________________________________________________________
*/
std::vector<int> reverseSeq(int n)
{
  std::vector<int> newN;
  for (int i = 1; i <= n; ++i)
    newN.push_back(i);
  reverse(newN.begin(), newN.end());
  return newN;
}