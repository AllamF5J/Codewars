/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/572b77262bedd351e9000076
| @description    : Write a function to get the first element(s) of a sequence.
|                   Passing a parameter n (default=1) will return the first n element(s)
|                   of the sequence. If n is 0, the function returns an empty sequence [].
|                   Examples:
|                   var arr = ['a', 'b', 'c', 'd', 'e'];
|                   first(arr) //=> ['a'];
|                   first(arr, 2) //=> ['a', 'b']
|                   first(arr, 3) //=> ['a', 'b', 'c'];
|                   first(arr, 0) //=> [];
|_______________________________________________________________________________
*/
function first(arr, n = 1) {
  return arr.slice(0, n);
}