/*
|_______________________________________________________________________________
| @Solver         : GziXnine.
| @Link           : https://www.codewars.com/kata/5b7ea71db90cc0f17c000a5a
| @description    : Given the molecular masses of two gases, their masses, the
|                   volume of the vessel, and the temperature, calculate the total
|                   pressure exerted by the gases. The formula used is:
|                   P_total = ((m1 / M1) + (m2 / M2)) * (T + 273.15) * 0.082 / V
|                   where:
|                   - m1, m2: masses of the gases in grams
|                   - M1, M2: molar masses of the gases in g/mol
|                   - T: temperature in degrees Celsius
|                   - V: volume of the vessel in dm³
|                   - R: gas constant (0.082 dm³·atm·K⁻¹·mol⁻¹)
|                   Convert the temperature from Celsius to Kelvin by adding 273.15.
|                   Example:
|                   Input: molarMass1 = 32, molarMass2 = 44, givenMass1 = 16, givenMass2 = 22, volume = 10, temp = 25
|                   Output: 1.161
|                   Notes: Ensure to handle temperature conversion to Kelvin and use the correct gas constant.
|_______________________________________________________________________________
*/
const solution = (molarMass1, molarMass2, givenMass1, givenMass2, volume, temp) => {
  return (((givenMass1 / molarMass1) + (givenMass2 / molarMass2)) * (temp + 273.15) * 0.082) / volume;
};
