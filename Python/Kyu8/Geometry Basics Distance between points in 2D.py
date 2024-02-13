'''
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/58dced7b702b805b200000be
| @description    : Calculate the distance between two Point objects (a and b).
|                   The Point objects have attributes x and y.
|                   Input coordinates fit in the range -50 <= x, y <= 50.
|                   Tests compare expected result and actual answer with a tolerance of 1e-6.
|_______________________________________________________________________________
'''
def distance_between_points(a, b):
    return ((b.x - a.x) ** 2 + (b.y - a.y) ** 2) ** 0.5
