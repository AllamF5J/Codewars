/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5513795bd3fafb56c200049e
| @description    : Create a function with two arguments that will return an
|                   array of the first n multiples of x.
|
|                   Assume both the given number and the number of times to
|                   count will be positive numbers greater than 0.
|
|                   Return the results as an array or list (depending on language).
|
|                   Examples
|                   countBy(1, 10) should return {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
|                   countBy(2, 5) should return {2, 4, 6, 8, 10}
|_______________________________________________________________________________
*/
#include <iostream>
#include <vector>

std::vector<int> countBy(int x, int n) {
    std::vector<int> newN;
    for(int i = 1; i <= n; ++i)
        newN.push_back(x * i);
    return newN;
}
