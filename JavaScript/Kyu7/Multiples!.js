/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/55a8a36703fe4c45ed00005b
| @description    : Make a program that takes a value (x) and returns "Bang" if
|                   the number is divisible by 3, "Boom" if it is divisible by 5,
|                   "BangBoom" if it is divisible by 3 and 5, and "Miss" if it
|                   isn't divisible by any of them. Note: Your program should only
|                   return one value.
|_______________________________________________________________________________
*/
function multiple(x) {
  return x % 15 == 0 ? 'BangBoom' : x % 5 == 0 ? 'Boom' : x % 3 == 0 ? 'Bang' : 'Miss';
}
