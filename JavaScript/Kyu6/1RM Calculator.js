/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/595bbea8a930ac0b91000130
| @description    : You just got done with your set at the gym, and you are wondering
|                   how much weight you could lift if you did a single repetition.
|                   Thankfully, a few scholars have devised formulas for this purpose:
|                   - Epley: 1 RM = w(1 + r / 30)
|                   - McGlothin: 1 RM = (100 * w) / (101.3 - 2.67123 * r)
|                   - Lombardi: 1 RM = w * r^0.10
|                   Your function will receive a weight w and a number of repetitions r 
|                   and must return your projected one repetition maximum, rounded to the
|                   nearest integer. If r is 1, the function returns w. If r is 0, the function returns 0.
|_______________________________________________________________________________
*/
function calculate1RM(w, r) {
  return r === 0 || w === 0 ? 0 : r === 1 ? w : Math.round(Math.max(w * (1 + r / 30), (100 * w) / (101.3 - 2.67123 * r), w * (r ** 0.1)));
}