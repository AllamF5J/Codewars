/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5267faf57526ea542e0007fb
| @description    : Re-implement the following Math functions for non-negative 
|                   numbers: 
|                   1. `Math.round()`: Rounds a number to the nearest integer.
|                   2. `Math.ceil()`: Rounds a number up to the nearest integer.
|                   3. `Math.floor()`: Rounds a number down to the nearest integer.
|                   Examples:
|                   Math.round(2.3) => 2
|                   Math.ceil(2.3) => 3
|                   Math.floor(2.7) => 2
|_______________________________________________________________________________
*/
Math.round = (number) => (number + 0.5) - (number + 0.5) % 1;
Math.ceil = (number) => number - number % 1 + !!(number % 1);
Math.floor = (number) => number - number % 1;