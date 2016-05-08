#include <stdio.h>

/* Copy input ot output; 2nd version */

/* Exercise 1-6 Verify that the expresion getchar() != EOF is 0 or 1
 * Exercise 1-7 Write a program to print the value of EOF */

int main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
}

//The while gets a char, assigns it to c, and then tests whether the 
//char was the EOF signal.  If it was not, the body of the while is 
//executed, printing the char
//
//The precedence of '!=' is higher than '=', so parentheses are needed
