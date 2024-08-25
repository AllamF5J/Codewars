/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/52fea6fd158f0576b8000089
| @description    : Write a module Converter that can take ASCII text and convert it
|                   to hexadecimal. The class should also be able to take hexadecimal
|                   and convert it to ASCII text. To make the conversion well defined,
|                   each ASCII character is represented by exactly two hex digits,
|                   left-padding with a 0 if needed. The conversion from ASCII to hex 
|                   should produce lowercase strings (i.e. f6 instead of F6).
|_______________________________________________________________________________
*/
var Converter = {
  toAscii: function (hex) {
    let arr = [];
    for (let i = 0; i < hex.length; i += 2) {
      arr.push(hex.slice(i, i + 2));
    }
    return arr.map(v => String.fromCharCode(parseInt(v, 16))).join('');
  },
  toHex: function (ascii) {
    return ascii.split('').map(v => v.charCodeAt().toString(16)).join('');
  }
}