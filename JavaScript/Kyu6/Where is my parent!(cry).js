/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/58539230879867a8cd00011c
| @description    : Given a string containing uppercase letters (mothers) and their 
|                   corresponding lowercase letters (children), return a new string 
|                   where all characters are in alphabetical order, with mothers 
|                   preceding their children. Each mother's children should be grouped 
|                   together and come after their mother.
|                   Examples:
|                   findChildren("aAbaBb") => "AaaBbb"
|                   findChildren("Cba") => "Cab"
|                   findChildren("aBc") => "Bcac"
|_______________________________________________________________________________
*/
function findChildren(dancingBrigade) {
  return dancingBrigade
    .toLowerCase()
    .split("")
    .sort()
    .map((element, index, array) =>
      (index === 0 || element !== array[index - 1]) ? element.toUpperCase() : element
    )
    .join("");
}
