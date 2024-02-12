/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/580a094553bd9ec5d800007d/cpp
| @description    : In this coding challenge inspired by a classic 'I'm Alan Partridge' episode, you are tasked with evaluating the temperature of an apple turnover.
|                   Alan famously claims that the turnover's temperature is "Hotter than the sun!" referencing a popular phrase from the show.
|
|                   Task:
|                   Given an input 'x', your objective is to determine whether the square of 'x' exceeds 1000. If it does, return the statement 
|                   "It's hotter than the sun!!", otherwise, return "Help yourself to a honeycomb Yorkie for the glovebox."
|
|                   Note:
|                   The reference to the sun's temperature, specifically its corona at 2,000,000 degrees Celsius, is for humorous effect and should be disregarded for the purpose of this challenge.
|_______________________________________________________________________________
*/
#include <string>

std::string apple(int x) {
  return x * x > 1000 ? "It's hotter than the sun!!" : "Help yourself to a honeycomb Yorkie for the glovebox.";
}
