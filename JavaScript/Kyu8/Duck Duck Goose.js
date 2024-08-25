/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/582e0e592029ea10530009ce
| @description    : Given an array of Player objects and an index (1-based), return
|                   the name of the chosen Player. The index wraps around the list of
|                   players if it exceeds the number of players.
|                   Example:
|                   duckDuckGoose([a, b, c, d], 1) should return a.name
|                   duckDuckGoose([a, b, c, d], 5) should return a.name
|                   duckDuckGoose([a, b, c, d], 4) should return d.name
|                   Notes: The index is 1-based.
|_______________________________________________________________________________
*/
function duckDuckGoose(players, goose) {
  return players[(goose - 1) % players.length].name;
}
