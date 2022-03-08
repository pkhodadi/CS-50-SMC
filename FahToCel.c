#include <stdio.h>
/*
    name: Parham Khodadi
    C = (F - 32)/ 1.8
*/

int main()
{
    /* Define the Fahrenheit and Celsius Variables */
    int Fahrenheit;
    double Celsius;

    /* Ask the user for the temperature in degrees Fahrenheit */
    printf("Please enter the temperature in degrees Fahrenheit: ");
    /* Allow user to input a value into Fahrenheit */
    scanf("%d", &Fahrenheit);

    /* Calculate the value of Celsius */
    Celsius = (Fahrenheit - 32) / 1.8;

    /* Give user the value of Celsius */
    printf("%d degrees Fahrenheit is %.2f degrees Celsius.", Fahrenheit, Celsius);

    system("pause");
    return 0;
}