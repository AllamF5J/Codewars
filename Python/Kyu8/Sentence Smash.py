'''
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/53dc23c68a0c93699800041d
| @description    : Smash an array of words together into a sentence.
|                   - Spaces are added between each word.
|                   - No space at the beginning or end of the sentence.
|_______________________________________________________________________________
'''
def smash(words):
    return " ".join(words) if len(words) >= 1 else ""
