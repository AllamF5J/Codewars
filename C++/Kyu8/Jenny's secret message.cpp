/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/55225023e1be1ec8bc000390
| @description    : Jenny has written a function that returns a greeting for a user.
|                   However, she's in love with Johnny, and would like to greet him
|                   slightly differently. She added a special case to her function,
|                   but she made a mistake. Can you help her?
|
|                   Task: Modify the greet function to provide a special greeting
|                   for Johnny and a general greeting for others.
|
|                   Example:
|                   - Input: "Johnny"
|                   - Output: "Hello, my love!"
|
|                   Note: The function should greet "Johnny" with "Hello, my love!"
|                   and others with a general greeting "Hello, {name}!".
|_______________________________________________________________________________
*/
std::string greet(std::string name)
{
  return "Hello, " + (name == "Johnny" ? "my love" : name) + "!";
}