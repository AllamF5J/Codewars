/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/57fb09ef2b5314a8a90001ed
| @description    : Replace all vowels with an exclamation mark in the sentence.
|                   Vowels are defined as aeiouAEIOU.
|_______________________________________________________________________________
*/

#include <string>

std::string replace(std::string s)
{
  std::string newS;
  for (int x : s)
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
      newS += '!';
    else
      newS += x;
  return newS;
}
