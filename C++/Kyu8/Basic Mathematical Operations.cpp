/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/57356c55867b9b7a60000bd7
| @description    : Your task is to create a function that does four basic mathematical operations.
|
|                   Function Signature:
|                   - int basicOp(char op, int val1, int val2);
|
|                   Examples:
|                   - basicOp('+', 4, 7);      // returns 11
|                   - basicOp('-', 15, 18);    // returns -3
|                   - basicOp('*', 5, 5);      // returns 25
|                   - basicOp('/', 49, 7);     // returns 7
|
|                   Note:
|                   - The function should take three arguments - operation(string/char), value1(number), value2(number).
|                   - The function should return the result of numbers after applying the chosen operation.
|_______________________________________________________________________________
*/
int basicOp(char op, int val1, int val2) {
  switch(op) {
    case '+': return val1 + val2;
    case '-': return val1 - val2;
    case '*': return val1 * val2;
    case '/': return val2 != 0 ? val1 / val2 : 0;
  }
}
