/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/59ca8246d751df55cc00014c
| @description    : A hero is on his way to the castle to complete his mission.
|                   However, he's been told that the castle is surrounded with
|                   a couple of powerful dragons! Each dragon takes 2 bullets
|                   to be defeated. The hero needs to determine if he has enough
|                   bullets to defeat the given number of dragons.
|
|                   Example:
|                   hero(10, 5) => true (10 bullets can defeat 5 dragons)
|                   hero(7, 4) => false (10 bullets can't defeat 4 dragons)
|_______________________________________________________________________________
*/
bool hero(int bullets, int dragons)
{
  return bullets / 2 >= dragons;
}