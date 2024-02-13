'''
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/57f24e6a18e9fad8eb000296
| @description    : Determine the phrase a girl would say at the last petal.
|                   Phrases: "I love you", "a little", "a lot", "passionately",
|                            "madly", "not at all". Phrases repeat if more than 6 petals.
|_______________________________________________________________________________
'''
def how_much_i_love_you(nb_petals):
    return ["I love you", "a little", "a lot", "passionately", "madly", "not at all"][nb_petals % 6 - 1]
