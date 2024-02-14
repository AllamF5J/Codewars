/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/52b7ed099cdc285c300001cd
| @description    : Write a function called sumIntervals/sum_intervals that
|                   accepts an array of intervals, and returns the sum of all the
|                   interval lengths. Overlapping intervals should only be
|                   counted once.
|_______________________________________________________________________________
*/
function sumIntervals(intervals) {
  intervals = intervals.sort(function(a, b) { // O(n)
    return a[0] - b[0];
  });
  intervals = intervals.reduce(function(acc, el, index, array) { // O(n)
    const anterior = array[index - 1];
    if (array.length > 1 && anterior !== undefined) {
      if (el[0] < acc[acc.length - 1]) {
        if (el[1] >= acc[acc.length - 1]) {
          acc[acc.length - 1] = el[1];
        }
      } else {
        acc.push(...el);
      }
    } else {
      acc.push(...el);
    }
    return acc;
  }, []);
  let result = 0;
  for (let i = 0; i < intervals.length - 1 ; i += 2) { // O(2n)
    result += (intervals[i + 1] - intervals[i]);
  }
  return result;
}
