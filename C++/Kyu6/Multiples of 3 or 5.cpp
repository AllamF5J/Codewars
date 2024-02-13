/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/514b92a657cdc65150000006
| @description    : Sum the multiples of 3 or 5 below the given number.
|                   - If the number is negative, return 0.
|                   - If the number is a multiple of both 3 and 5, only count it once.
|_______________________________________________________________________________
*/
int solution(int number) {
	int sum = 0;
  for (int n = 3; n < number; n++) {
  	if ((n % 3 == 0) || (n % 5 == 0))
  	  sum += n;
  }
  return sum;
}
