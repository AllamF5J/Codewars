'''
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/56fcfad9c7e1fa2472000034
| @description    : Determine if a number is Evil or Odious based on its binary
|                   representation. Return "It's Evil!" for even 1's and
|                   "It's Odious!" for odd 1's.
|_______________________________________________________________________________
'''
def evil(n):
    b = bin(n)
    count = b.count('1')
    if(count % 2 != 0):
        return "It's Odious!"
    else:    
        return "It's Evil!"
