/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/515e188a311df01cba000003
| @description    : The function is not returning the correct values. Can you
|                   figure out why?
|
|                   Example (Input --> Output):
|                   - 3 --> "Earth"
|_______________________________________________________________________________
*/
std::string get_planet_name(int id)
{
  std::string arr[] = {"", "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
  return arr[id];
}