/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/55f9b48403f6b87a7c0000bd
| @description    : Calculate how many blank pages you need for copying paperwork.
|                   If n < 0 or m < 0, return 0.
|_______________________________________________________________________________
*/
int paperwork(int n, int m) {
  return n < 0 || m < 0 ? 0 : n * m;
}
