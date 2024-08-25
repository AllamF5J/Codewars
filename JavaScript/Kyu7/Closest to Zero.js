/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/59887207635904314100007b
| @description    : Find the closest value to zero from the list. If there are two
|                   values equally close to zero, return None. If zero is in the list,
|                   return zero. The function should return the single closest value.
|_______________________________________________________________________________
*/
const closest = (arr) => {
  let smallest = [...new Set(arr)].sort((a, b) => Math.abs(a) - Math.abs(b));
  return smallest[0] === 0 ? smallest[0] : (smallest[0] + smallest[1] === 0 ? null : smallest[0]);
}
