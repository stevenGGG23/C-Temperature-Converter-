#C Temperature Converter

A simple C program that prompts the user for a starting temperature scale, a target temperature scale, and a numeric temperature value, then converts the temperature accordingly.

Supported temperature scales:

Fahrenheit (F)

Celsius (C)

Kelvin (K)

Features

Converts between Fahrenheit, Celsius, and Kelvin

Accepts uppercase or lowercase input for temperature types

Displays results formatted to two decimal places

Uses standard C input/output (stdio.h)

Includes clear, readable output for easy understanding

How It Works

The program asks the user to enter:

The starting temperature scale (F, C, or K)

The target temperature scale (F, C, or K)

The temperature value to convert

Based on the selected scales, the appropriate conversion formula is applied.

The converted temperature is displayed with the correct unit.

Example Run
Enter the starting temperature scale (F, C, K): F
Enter the target temperature scale (F, C, K): C
Enter the temperature value: 98.6

98.60°F is equivalent to 37.00°C.

Conversion Formulas Used

F → C: (F - 32) * 5/9

C → F: (C * 9/5) + 32

C → K: C + 273.15

K → C: K - 273.15

F → K: (F - 32) * 5/9 + 273.15

K → F: (K - 273.15) * 9/5 + 32

Compilation & Execution

Compile the program using gcc:

gcc temperature_converter.c -o temp_converter


Run the program:

./temp_converter

Requirements

C Compiler (GCC recommended)

Standard C Library
