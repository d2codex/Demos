/* Fahrenheit to Celsius Temperature Converter */

#include <stdio.h>

int main(void)
{
    /* Prompt user to enter a temperature value in Fahrenheit */

    printf("Please enter a temperature value in Fahrenheit: ");
    float temperatureF;

    /* Convert from Fahrenheit to Celsius*/

    scanf ("%f", &temperatureF);
    float temperatureC = (temperatureF - 32.0) * 5.0 / 9.0;

    /* Print the corresponding temperature value in Celsius */

    printf("The corresponding temperature in Celsius is %.2f C. \n", temperatureC);
    return 0;
}