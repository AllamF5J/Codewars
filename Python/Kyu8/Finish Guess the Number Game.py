'''
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/568018a64f35f0c613000054
| @description    : Implement a guessing game with a limited number of lives.
|                   - If the user guesses right, return True.
|                   - If the user guesses wrong, return False and deduct a life.
|                   - If the user exceeds the limit of lives, throw an error.
|_______________________________________________________________________________
'''
class Guesser:
  def __init__(self, number, lives):
    self.number = number
    self.lives = lives
  def guess(self, n):
    if self.lives < 1: raise "Too many guesses!"
    if self.number == n: return True
    self.lives -= 1
    return False
