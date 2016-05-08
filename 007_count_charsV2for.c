#include <stdio.h>

/* count chars in input; 2nd version */
int main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc);
    printf("%.0f\n", nc);
}

//printf uses %f for both float and double; 
//%.0f suppresses the printing of decimals to 0
//
//
