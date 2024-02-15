/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/576bb71bbbcf0951d5000044
| @description    : Given an array of integers.
|                   Return an array, where the first element is the count of
|                   positives numbers and the second element is the sum of
|                   negative numbers. 0 is neither positive nor negative.
|
|                   If the input is an empty array or is null, return an empty
|                   array.
|
|                   Example
|                   For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13,
|                   -14, -15], you should return [10, -65].
|_______________________________________________________________________________
*/
#include <iostream>
#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input) {
    int x = 0, y = 0;
    if (input.empty()) return {};
    else {
        for (int z : input)
            if (z > 0) x++;
            else y += z;
    }
    return {x, y};
}
