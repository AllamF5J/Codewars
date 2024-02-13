/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/55a5bfaa756cfede78000026/javascript
| @description    : Given a value 'x', the function performs the following:
|                   - If 'x' is a string, return "Error".
|                   - Otherwise, return (x * 50) + 6.
|_______________________________________________________________________________
*/
function problem(x) {
  if (typeof x === "string") {
    return "Error";
  } else {
    return (x * 50) + 6;
  }
}
