# C Temperature Converter

A simple C program that prompts the user for a starting temperature scale, a target temperature scale, and a numeric temperature value, then converts the temperature accordingly.

## Supported Temperature Scales
- Fahrenheit (F)
- Celsius (C)
- Kelvin (K)

## Features
- Converts between Fahrenheit, Celsius, and Kelvin
- Accepts uppercase or lowercase input for temperature types
- Displays results formatted to two decimal places
- Uses standard C input/output (`stdio.h`)
- Includes clear, readable output for easy understanding

## How It Works
The program asks the user to enter:
1. The starting temperature scale (`F`, `C`, or `K`)
2. The target temperature scale (`F`, `C`, or `K`)
3. The temperature value to convert

Based on the selected scales, the appropriate conversion formula is applied.  
The converted temperature is then displayed with the correct unit.


## Conversion Formulas Used
- **F → C**: `(F - 32) * 5/9`
- **C → F**: `(C * 9/5) + 32`
- **C → K**: `C + 273.15`
- **K → C**: `K - 273.15`
- **F → K**: `(F - 32) * 5/9 + 273.15`
- **K → F**: `(K - 273.15) * 9/5 + 32`

## Compilation & Execution
Compile the program using `gcc`:
