/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://codewars.com/kata/5263c6999e0f40dee200059d
| @description    : Generate all possible PIN combinations based on the given keypad
|                   layout, where each digit can be replaced by any of its adjacent digits.
|                   The function takes an observed PIN as input and returns an array
|                   of all possible variations.
|                   Examples:
|                   getPINs("1357") => ["1135", "1137", "1155", "1157", "1215", "1217", ...]
|_______________________________________________________________________________
*/

function getPINs(ob) {
  const obj = {
    "0": ["0", "8"],
    "1": ["1", "2", "4"],
    "2": ["2", "3", "5", "1"],
    "3": ["3", "6", "2"],
    "4": ["4", "1", "5", "7"],
    "5": ["5", "2", "6", "8", "4"],
    "6": ["6", "3", "9", "5"],
    "7": ["7", "4", "8"],
    "8": ["8", "5", "9", "0", "7"],
    "9": ["9", "6", "8"]
  };
  return ob
    .split("")
    .map(o => obj[o])
    .reduce((start, tail) => {
      if (!start) return tail;

      return start.reduce(
        (list, combination) => list.concat(tail.map(key => combination + key)),
        []
      );
    }, null);
}