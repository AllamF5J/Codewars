/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/52ec24228a515e620b0005ef
| @description    : How many ways can you make the sum of a number?
|                   From wikipedia: https://en.wikipedia.org/wiki/Partition_(number_theory)
|                   In number theory and combinatorics, a partition of a positive
|                   integer n, also called an integer partition, is a way of
|                   writing n as a sum of positive integers. Two sums that differ
|                   only in the order of their summands are considered the same
|                   partition. If order matters, the sum becomes a composition.
|_______________________________________________________________________________
*/
var memo = [];

function sum(n, m = n) {
    if (n == 0) return 1;
    if (n < 0 || m == 0) return 0;
    if (memo[n] && memo[n][m]) return memo[n][m];
    let total = sum(n, m - 1) + sum(n - m, m);
    if (!memo[n]) {
        memo[n] = [];
    }
    memo[n][m] = total;
    return total;
}
