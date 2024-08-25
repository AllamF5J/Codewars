/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5659c6d896bc135c4c00021e
| @description    : Write a function that takes a positive integer and returns the 
|                   next smaller positive integer containing the same digits. If no 
|                   such number exists, return -1. Ensure that the next smaller number 
|                   does not start with a leading zero.
|                   Examples:
|                   nextSmaller(21) == 12
|                   nextSmaller(531) == 513
|                   nextSmaller(2071) == 2017
|                   nextSmaller(1027) == -1
|_______________________________________________________________________________
*/
function nextSmaller(num) {
  let arr = num.toString().split``.reverse();
  let outputString = "";
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < i; j++) {
      if (arr[j] < arr[i]) {
        let tempArr = arr.splice(j, 1);
        let tempArr2 = arr
          .splice(0, i)
          .sort()
          .reverse();
        tempArr = tempArr.concat(tempArr2);
        outputString += arr
          .reverse()
          .concat(tempArr)
          .join("");
        return outputString.length === outputString.replace(/^0+/, "").length
          ? outputString * 1
          : -1;
      }
    }
  }
  return -1;
}