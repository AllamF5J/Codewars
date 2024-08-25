/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/56b0ff16d4aa33e5bb00008e
| @description    : Convert a full date/time string into a shorter format by
|                   removing the time portion. The input string is always in the
|                   format "Weekday Month Day, time", and the output should be
|                   "Weekday Month Day" without the time.
|                   Example:
|                   Input: "Friday May 2, 7pm"
|                   Output: "Friday May 2"
|                   Notes: The input string will always be in the given format.
|_______________________________________________________________________________
*/
function shortenToDate(longDate) {
  return longDate.split(",")[0];
}
