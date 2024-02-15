/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/577bd026df78c19bca0002c0
| @description    : Character recognition software is widely used to digitise
|                   printed texts. Thus the texts can be edited, searched, and
|                   stored on a computer.
|
|                   When documents (especially pretty old ones written with a
|                   typewriter), are digitised character recognition softwares
|                   often make mistakes.
|
|                   Your task is to correct the errors in the digitised text.
|                   You only have to handle the following mistakes:
|                   S is misinterpreted as 5
|                   O is misinterpreted as 0
|                   I is misinterpreted as 1
|
|                   The test cases contain numbers only by mistake.
|_______________________________________________________________________________
*/
#include <iostream>
#include <string>

std::string correct(std::string str) {
    std::string newStr;
    for(int x : str)
        if(x == '1') newStr += "I";
        else if(x == '0') newStr += "O";
        else if(x == '5') newStr += "S";
        else newStr += x;
    return newStr;
}
