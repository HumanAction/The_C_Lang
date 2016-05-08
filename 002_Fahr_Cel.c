#include <stdio.h>

/*Print Fahrenheit-Celsius table 
for fahr = 0, 20, ..., 300 */

/* Exercise 1-3 and 1-4:
 *  Make a header above table
 *  and Write a program to print the corresponding
 *  Celsius to Fahrenheit */

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;  // lower limit of temperature scale
    upper = 300; //Upper limit
    step = 20; // Step size

    fahr = lower;
    while (fahr <= upper) 
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr +step;
    }
}
