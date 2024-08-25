/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/5c374b346a5d0f77af500a5a
| @description    : Determine which elevator ("left" or "right") is closest to
|                   the called floor. If both are equally distant, choose the 
|                   "right" elevator.
|_______________________________________________________________________________
*/
function elevator(left, right, call) {
  return Math.abs(call - left) < Math.abs(call - right) ? "left" : "right";
}
