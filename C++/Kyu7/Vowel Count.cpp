/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/54ff3102c1bad923760001f3
| @description    : Return the number of vowels in the given string.
|                   Vowels considered: a, e, i, o, u (not including y).
|_______________________________________________________________________________
*/
#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  for (int x : inputStr){
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
      num_vowels++;
    }
  }
  return num_vowels;
}
