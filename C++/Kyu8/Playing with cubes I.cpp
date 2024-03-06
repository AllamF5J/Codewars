/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/55c0a79e20be94c91400014b
| @description    : Create a public class called Cube without a constructor
|                   which gets one single private integer variable Side, a getter
|                   GetSide(), and a setter SetSide(int num) method for this
|                   property. Actually, getter and setter methods are not the
|                   common way to write this code in C#. In the next kata of this
|                   series, we gonna refactor the code and make it a bit more
|                   professional...
|
|                   Notes:
|                   - There's no need to check for negative values!
|                   - Initialize the side to 0.
|_______________________________________________________________________________
*/
class Cube
{
  private:
    int side = 0;
  public:
    int GetSide()
    {
      return side;
    }
    void SetSide(int num)
    {
      side = num;
    }
};