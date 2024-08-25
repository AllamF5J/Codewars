/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5c8bfa44b9d1192e1ebd3d15
| @description    : Given an array representing a queue of sheep and one wolf,
|                   return a warning message. If the wolf is the closest animal
|                   to the front of the queue, return "Pls go away and stop eating
|                   my sheep". Otherwise, return "Oi! Sheep number N! You are about
|                   to be eaten by a wolf!" where N is the position of the sheep in
|                   front of the wolf.
|                   Examples:
|                   warnTheSheep(["sheep", "sheep", "sheep", "wolf", "sheep"]) 
|                     == "Oi! Sheep number 1! You are about to be eaten by a wolf!"
|                   warnTheSheep(["sheep", "sheep", "wolf"]) 
|                     == "Pls go away and stop eating my sheep"
|                   NOTE: There will always be exactly one wolf in the array.
|_______________________________________________________________________________
*/
function warnTheSheep(queue) {
  let pos = queue.length - (queue.indexOf("wolf") + 1);
  return pos !== 0 
    ? `Oi! Sheep number ${pos}! You are about to be eaten by a wolf!` 
    : "Pls go away and stop eating my sheep";
}
