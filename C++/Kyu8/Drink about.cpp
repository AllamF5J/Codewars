/*
|_______________________________________________________________________________
| @Solver         : Haithem_Solve
| @Link           : https://www.codewars.com/kata/56170e844da7c6f647000063
| @description    : Kids drink toddy. Teens drink coke. Young adults drink beer.
|                   Adults drink whisky.
|
|                   Make a function that receives age and returns what they drink.
|
|                   Rules:
|                   - Children under 14 old.
|                   - Teens under 18 old.
|                   - Young adults under 21 old.
|                   - Adults have 21 or more.
|
|                   Examples: (Input --> Output)
|                   - 13 --> "drink toddy"
|                   - 17 --> "drink coke"
|                   - 18 --> "drink beer"
|                   - 20 --> "drink beer"
|                   - 30 --> "drink whisky"
|_______________________________________________________________________________
*/

#include <string>
using namespace std;
std::string people_with_age_drink(int age)
{
  /*
  يَسْأَلُونَكَ عَنِ الْخَمْرِ وَالْمَيْسِرِ ۖ قُلْ فِيهِمَا إِثْمٌ كَبِيرٌ وَمَنَافِعُ لِلنَّاسِ وَإِثْمُهُمَا أَكْبَرُ مِن نَّفْعِهِمَا ۗ
  وَيَسْأَلُونَكَ مَاذَا يُنفِقُونَ قُلِ الْعَفْوَ ۗ كَذَٰلِكَ يُبَيِّنُ اللَّهُ لَكُمُ الْآيَاتِ لَعَلَّكُمْ تَتَفَكَّرُونَ"
            219 سورة البقرة، الآية
      They ask you about wine and gambling. Say, "In them is great sin and [yet, some]
      benefit for people.
      But their sin is greater than their benefit."
      And they ask you what they should spend. Say, "The excess [beyond needs]."
      Thus Allah makes clear to you the verses [of revelation] that you might give thought.
                                                        "Surah Al-Baqara Verse 219"
  */
  return age < 14 ? "drink toddy" : age < 18 ? "drink coke"
                                : age < 21   ? "drink beer"
                                             : "drink whisky";
}