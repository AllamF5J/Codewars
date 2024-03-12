/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/54147087d5c2ebe4f1000805
| @description    : Create a function called _if which takes 3 arguments: a
|                   value bool and 2 functions (which do not take any
|                   parameters): func1 and func2.
|
|                   When bool is truthy, func1 should be called, otherwise
|                   call the func2.
|
|                   Example:
|                   void the_true() { printf("true"); }
|                   void the_false() { printf("false"); }
|                   _if(true, the_true, the_false);
|                   // Logs "true" to the console
|_______________________________________________________________________________
*/

void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{
  return value == 1 ? func1() : func2();
}