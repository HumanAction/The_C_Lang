#include <stdio.h>

/* Copy input to output; 1st version */

int main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar(); // Not sure why this line is here; does nothing
    }
}
//We must declare c to be a type big enough to hold any value that
//getchar returns.  We can't use char since c must be big enough to
//hold EOF in addition to any possible char. Therefore we use int.
//
//EOF is an int defined in <stdio.h>
