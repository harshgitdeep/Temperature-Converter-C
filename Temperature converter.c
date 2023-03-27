#include <stdio.h>

int main() {
    float temperature, converted_temp;
    int from_unit, to_unit;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    printf("Enter the unit of temperature (1 for Celsius, 2 for Fahrenheit, 3 for Kelvin): ");
    scanf("%d", &from_unit);

    printf("Enter the unit to convert to (1 for Celsius, 2 for Fahrenheit, 3 for Kelvin): ");
    scanf("%d", &to_unit);

    if (from_unit == 1) {
        // Celsius to Fahrenheit and Kelvin conversion
        if (to_unit == 2) {
            converted_temp = (temperature * 9/5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, converted_temp);
        }
        else if (to_unit == 3) {
            converted_temp = temperature + 273.15;
            printf("%.2f Celsius = %.2f Kelvin\n", temperature, converted_temp);
        }
        else {
            printf("Invalid unit\n");
        }
    }
    else if (from_unit == 2) {
        // Fahrenheit to Celsius and Kelvin conversion
        if (to_unit == 1) {
            converted_temp = (temperature - 32) * 5/9;
            printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, converted_temp);
        }
        else if (to_unit == 3) {
            converted_temp = (temperature - 32) * 5/9 + 273.15;
            printf("%.2f Fahrenheit = %.2f Kelvin\n", temperature, converted_temp);
        }
        else {
            printf("Invalid unit\n");
        }
    }
    else if (from_unit == 3) {
        // Kelvin to Celsius and Fahrenheit conversion
        if (to_unit == 1) {
            converted_temp = temperature - 273.15;
            printf("%.2f Kelvin = %.2f Celsius\n", temperature, converted_temp);
        }
        else if (to_unit == 2) {
            converted_temp = (temperature - 273.15) * 9/5 + 32;
            printf("%.2f Kelvin = %.2f Fahrenheit\n", temperature, converted_temp);
        }
        else {
            printf("Invalid unit\n");
        }
    }
    else {
        printf("Invalid unit\n");
    }

    return 0;
}
