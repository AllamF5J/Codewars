/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/57ee4a67108d3fd9eb0000e7
| @description    : Write a function that takes a list of strings as an argument and returns
|                   a filtered list containing the same elements but with the 'geese' removed.
|                   The geese are any strings in the following array:
|                   ["African", "Roman Tufted", "Toulouse", "Pilgrim", "Steinbacher"]
|                   Example:
|                   Input: ["Mallard", "Hook Bill", "African", "Crested", "Pilgrim", "Toulouse", "Blue Swedish"]
|                   Output: ["Mallard", "Hook Bill", "Crested", "Blue Swedish"]
|                   The elements in the returned array should be in the same order as in the initial array.
|_______________________________________________________________________________
*/
function gooseFilter(birds) {
  var geese = ["African", "Roman Tufted", "Toulouse", "Pilgrim", "Steinbacher"];
  
  return birds.filter((ele) => !geese.includes(ele));
}
