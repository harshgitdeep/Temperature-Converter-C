# <b>Temperature-Converter Using C</b>

Overall, this program allows the user to enter a temperature value and two temperature units to convert between. The program then performs the appropriate conversion and displays the result with the appropriate unit. This program is a good example of using conditional statements to make decisions in a program, and using input/output functions to communicate with the user.

Sure, here's a more detailed description of the C program:

1. The program starts by including the standard input/output library stdio.h, which provides functions for reading input from the user and printing output to the screen.

2. The main() function is declared, which is the entry point of the program.

3. Inside the main() function, we declare the variables temperature, converted_temp, from_unit, and to_unit. temperature holds the temperature value entered by the user, converted_temp holds the result of the temperature conversion, and from_unit and to_unit hold the unit of the temperature to convert from and the unit to convert to, respectively.

4. The program prompts the user to enter the temperature using the printf() function and reads the input using the scanf() function.

5. The program prompts the user to enter the unit of the temperature to convert from using the printf() function and reads the input using the scanf() function.

6. The program prompts the user to enter the unit of the temperature to convert to using the printf() function and reads the input using the scanf() function.

7. The program then checks the value of from_unit using a conditional statement (if-else) to determine the unit of the temperature to convert from.

8. Depending on the value of from_unit, the program performs the appropriate conversion using conditional statements (if-else if-else) and stores the result in the converted_temp variable.

9. The program then uses the printf() function to display the converted temperature with the appropriate unit.

10. The program returns 0 to indicate that the program has run successfully.
