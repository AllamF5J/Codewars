/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/5b68c7029756802aa2000176
| @description    : Given a logarithm base `x` and two values `a` and `b`, return
|                   the sum of logarithms with base `x` for `a` and `b`. This can be 
|                   computed as `log_x(a) + log_x(b)`, where `log_x` represents the 
|                   logarithm with base `x`.
|                   The function uses the change of base formula for logarithms:
|                   `log_x(a) = log(a) / log(x)`.
|                   Example:
|                   Input: `x = 10`, `a = 100`, `b = 1000`
|                   Output: `3`
|                   Explanation: `log_10(100) + log_10(1000) = 2 + 3 = 5`
|                   Notes: The input values will always be positive numbers.
|_______________________________________________________________________________
*/
const logs = (x, a, b) => Math.log(a * b) / Math.log(x);
