/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/57a2013acf1fa5bfc4000921
| @description    : Write a function which calculates the average of the numbers
|                   in a given list.
|                   Note: Empty arrays should return 0.
|                   #include <vector>
|                   double calcAverage(const std::vector<int>& values){
|                       double x = 0, z;
|                       for(int y : values)
|                           x += y;
|                       z = x / values.size();
|                       return z;  
|                   }
|_______________________________________________________________________________
*/
#include <iostream>
#include <vector>

double calcAverage(const std::vector<int>& values) {
    double x = 0, z;
    for(int y : values)
        x += y;
    z = x / values.size();
    return z;  
}
