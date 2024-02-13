/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/5951d30ce99cf2467e000013
| @description    : Determine if it is possible to form a Pythagorean Triple
using |                   an unsorted array of 3 positive integers [n1, n2, n3].
|                   A Pythagorean Triple satisfies the equation a^2 + b^2 = c^2.
|_______________________________________________________________________________
*/
#include <stdbool.h>

bool pythagorean_triple(const unsigned s[3]) {
  unsigned long a = s[0] * s[0], b = s[1] * s[1], c = s[2] * s[2];

  return a == b + c || b == a + c || c == a + b;
}
