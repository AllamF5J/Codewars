/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/52a382ee44408cea2500074c
| @description    : Calculate the determinant of a square matrix (N x N). The 
|                   determinant is computed recursively by reducing the matrix to 
|                   smaller matrices until reaching the base cases of 1x1 and 2x2 
|                   matrices.
|                   Examples:
|                   determinant([[1]]) => 1
|                   determinant([[1, 2], [3, 4]]) => -2
|                   determinant([[1, 2, 3], [4, 5, 6], [7, 8, 9]]) => 0
|_______________________________________________________________________________
*/

const determinant = m =>
  m.length === 1 ? m[0][0] : m[0].reduce
  (
    (s, b, i) =>  s +  (i % 2 === 0 ? 1 : -1) *  b * determinant(m.slice(1).map(r => r.filter((_, j) => j !== i))), 0
  );