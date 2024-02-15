/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5583090cbe83f4fd8c000051
| @description    : Convert number to reversed array of digits
|                   Given a random non-negative number, you have to return the
|                   digits of this number within an array in reverse order.
|
|                   Example(Input => Output):
|                   35231 => [1,3,2,5,3]
|                   0 => [0]
|_______________________________________________________________________________
*/
#include <string>
#include <vector>

std::vector<int> digitize(unsigned long number) 
{        
    std::vector<int> numDigits;
    if(number == 0) 
        return std::vector<int>({0});

    while(number > 0){
        numDigits.push_back(number % 10);
        number /= 10;
    }
    return numDigits;
}
