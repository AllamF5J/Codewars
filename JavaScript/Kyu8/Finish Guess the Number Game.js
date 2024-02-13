/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/568018a64f35f0c613000054
| @description    : A class for a guessing game with a limited number of lives.
|                   Throws an error if the user exceeds the guess limit.
|_______________________________________________________________________________
*/
class Guesser {
  constructor(number, lives) {
    this.number = number;
    this.lives = lives;
  }
  
  guess(n) {
    if (this.lives < 1) throw 'already dead'; // Throw an error if no lives left
    return (this.number === n || !(this.lives--)); // Return true for a correct guess, false otherwise
  }
}
