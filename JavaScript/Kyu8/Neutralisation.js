/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/65128732b5aff40032a3d8f0
| @description    : Given two strings comprised of '+' and '-', return a new string 
|                   which shows how the two strings interact based on the following rules:
|                   - When '+' and '+' interact, they remain '+'.
|                   - When '-' and '-' interact, they remain '-'.
|                   - When '+' and '-' interact, they become '0'.
|                   The function compares characters at the same positions in both strings
|                   and applies the rules above.
|                   Examples:
|                   neutralise("+-+", "+--")  // Returns "+-0"
|                   neutralise("--++--", "++--++")  // Returns "000000"
|                   neutralise("-+-+-+", "-+-+-+")  // Returns "-+-+-+"
|                   neutralise("-++-", "-+-+")  // Returns "-+00"
|_______________________________________________________________________________
*/
const neutralise = (s1, s2) => s1.split("").map((ele, i) => ele === s2[i] ? ele : "0").join("");
