/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/58649884a1659ed6cb000072
| @description    : You're writing code to control your town's traffic lights.
|                   You need a function to handle each change from green, to
|                   yellow, to red, and then to green again.
|
|                   Complete the function that takes a string as an argument
|                   representing the current state of the light and returns a
|                   string representing the state the light should change to.
|
|                   For example, when the input is green, output should be
|                   yellow.
|
|                   In C, the state of the light is represented by an enum,
|                   not a string.
|_______________________________________________________________________________
*/
#include <string>

std::string update_light(std::string current)
{
  return current == "green"    ? "yellow"
         : current == "yellow" ? "red"
                               : "green";
}