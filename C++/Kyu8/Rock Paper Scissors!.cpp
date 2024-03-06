/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5672a98bdbdd995fad00000f
| @description    : Rock Paper Scissors
|                   Let's play! You have to return which player won! In case of
|                   a draw return Draw!
|
|                   Examples (Input1, Input2 --> Output):
|                   - "scissors", "paper" --> "Player 1 won!"
|                   - "scissors", "rock" --> "Player 2 won!"
|                   - "paper", "paper" --> "Draw!"
|_______________________________________________________________________________
*/
#include <string>

std::string rps(const std::string &p1, const std::string &p2)
{
  if (p1 == p2)
    return "Draw!";
  if ((p1[0] == 's' && p2[0] == 'p') ||
      (p1[0] == 'p' && p2[0] == 'r') ||
      (p1[0] == 'r' && p2[0] == 's'))
    return "Player 1 won!";
  return "Player 2 won!";
}