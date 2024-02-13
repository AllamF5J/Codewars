'''
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3
| @description    : Convert a name into initials with a dot separating them.
|                   The input should be two words with one space in between them.
|                   Example: "Sam Harris" => "S.H"
|_______________________________________________________________________________
'''
def abbrevName(name):
    return '.'.join([w[0].upper() for w in name.split()])
