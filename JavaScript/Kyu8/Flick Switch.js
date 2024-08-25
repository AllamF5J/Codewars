/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/64fbfe2618692c2018ebbddb
| @description    : Create a function that returns an array of boolean values. 
|                   The array starts with `true` and switches to `false` whenever
|                   the word 'flick' appears. Each 'flick' switches the boolean value 
|                   for all subsequent items in the array.
|                   Examples:
|                   flickSwitch(['codewars', 'flick', 'code', 'wars']) 
|                     == [True, False, False, False]
|                   flickSwitch(['flick', 'chocolate', 'adventure', 'sunshine']) 
|                     == [False, False, False, False]
|                   flickSwitch(['bicycle', 'jarmony', 'flick', 'sheep', 'flick']) 
|                     == [True, True, False, False, True]
|                   NOTE: The list will always contain the word 'flick' in lowercase.
|_______________________________________________________________________________
*/
const flickSwitch = (arr) => {
  let flag = true;
  return arr.map(ele => ele === "flick" ? (flag = !flag) : flag);
}
