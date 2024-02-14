"""
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/55a8a36703fe4c45ed00005b
| @description    : Make a program that takes a value (x) and returns "Bang" if
|                   the number is divisible by 3, "Boom" if it is divisible by 5,
|                   "BangBoom" if it is divisible by 3 and 5, and "Miss" if it
|                   isn't divisible by any of them. Note: Your program should only
|                   return one value.
|_______________________________________________________________________________
"""
def multiple(a):
    if a % 15 == 0:
        return 'BangBoom'
    elif a % 5 == 0:
        return 'Boom'
    elif a % 3 == 0:
        return 'Bang'
    else:
        return 'Miss'
