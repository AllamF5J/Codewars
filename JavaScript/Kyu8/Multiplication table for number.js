/*
|_______________________________________________________________________________
| @Solver         : User's implementation to generate a multiplication table.
| @Link           : https://www.codewars.com/kata/5a2fd38b55519ed98f0000ce
| @description    : Given an integer 'number' (1 to 10), this function creates a
|                   multiplication table as a string, including rows for numbers
|                   from 1 to 10, and formats each row appropriately.
|_______________________________________________________________________________
*/
function multiTable(n) {
  let res = '';
  for(let i = 1; i <= 10; i++){
    res += `${i} * ${n} = ${i * n}`;
    if(i < 10) res += '\n';
  }
  return res;
}
