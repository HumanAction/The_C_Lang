#include <stdio.h>

/* print Fahrenheit-Celsius table */

/* EXERCISE 1-5
 *  Mod the temp conversion program to print the table in reverse order (300-0) */

#define LOWER 0 /*lower limit of table */
#define UPPER 300 /*upper limit */
#define STEP 20 /*step size */


int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

