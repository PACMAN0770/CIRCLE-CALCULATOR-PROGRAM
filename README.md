Circle & Sphere Calculator

A simple command-line program written in C that calculates the area of a circle, and the surface area and volume of a sphere, based on a given radius.

Features
Prompts the user for a radius
Calculates and displays:
Area of a circle
Surface area of a sphere
Volume of a sphere
Validates input to reject non-numeric or negative values
Requirements
A C compiler (e.g., gcc)
Building
bash
gcc -o circle_sphere main.c -lm

Note: The -lm flag is required to link the math library used for pow().

Running
bash
./circle_sphere
Example
Enter the radius: 5

The area of the circle is: 78.54 cm^2
The surface area of the sphere is: 314.16 cm^2
The volume of the sphere is: 523.60 cm^3
Notes
Units are shown in square centimeters (cm^2) for area/surface area and cubic centimeters (cm^3) for volume.
Negative or invalid input will cause the program to exit with an error message.
