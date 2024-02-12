/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/57f781872e3d8ca2a000007e
| @description    : Given an array of integers, return a new array with each value doubled.
|_______________________________________________________________________________
*/
std::vector<int> maps(const std::vector<int> & values) {
  std::vector<int> newValues;
  for(int x : values)
    newValues.push_back(2 * x);  
  return newValues;
}
