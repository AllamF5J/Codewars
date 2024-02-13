'''
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/577a6e90d48e51c55e000217
| @description    : Implement the Collatz conjecture algorithm to find the number
|                   of steps needed to reach 1 from a positive integer n.
|_______________________________________________________________________________
'''
def hotpo(n):
    if n < 2:
        return 0
    return hotpo(3 * n + 1 if n % 2 else  n / 2) + 1
