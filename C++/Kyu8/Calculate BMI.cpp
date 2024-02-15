/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/57a429e253ba3381850000fb
| @description    : Write function bmi that calculates body mass index 
|                   (bmi = weight / height^2).
|                   if bmi <= 18.5 return "Underweight"
|                   if bmi <= 25.0 return "Normal"
|                   if bmi <= 30.0 return "Overweight"
|                   if bmi > 30 return "Obese"
|                   std::string bmi(double w, double h) 
|                   {
|                       double bmi = w / (h * h);
|                       return bmi <= 18.5? "Underweight" : bmi > 18.5 && bmi <= 25.0? "Normal" : bmi > 25.0 && bmi <= 30.0? "Overweight" : "Obese";
|                   }
|_______________________________________________________________________________
*/
#include <iostream>

std::string bmi(double w, double h) {
    double bmi = w / (h * h);
    return bmi <= 18.5 ? "Underweight" : bmi <= 25.0 ? "Normal" : bmi <= 30.0 ? "Overweight" : "Obese";
}
