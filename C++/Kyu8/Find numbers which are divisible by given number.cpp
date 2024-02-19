/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/55edaba99da3a9c84000003b
| @description    : Complete the function which takes two arguments and returns
|                   all numbers which are divisible by the given divisor. The first
|                   argument is an array of numbers, and the second is the divisor.
|
|                   Example (Input1, Input2 --> Output)
|                   - [1, 2, 3, 4, 5, 6], 2 --> [2, 4, 6]
|_______________________________________________________________________________
*/

std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
  std::vector<int> newNumbers;
  for (int x : numbers)
    if (x % divisor == 0)
      newNumbers.push_back(x);
  return newNumbers;
}
