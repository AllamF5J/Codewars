/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/52fba66badcd10859f00097e
| @description    : Remove vowels from a string to neutralize trolls' comments.
|                   Note: 'y' is not considered a vowel for this kata.
|_______________________________________________________________________________
*/
# include <string>

std::string disemvowel(const std::string& str) {
  std::string newStr;
  for(int x : str)
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') continue;
    else newStr += x;
  return newStr;
}
