#include <stdio.h>

#define IN 1 /*inside a word */
#define OUT 0 /*outside a word */

/*count lines, words, and char in input */

/* Exercise 1-11 How would you test the word count program?
 * What kinds of input are most likely to uncover bugs if 
 * there are any?
 * Exercise 1-12 Write a program that prints its input one
 * word per line */

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c =getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state ==OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("nl=%d nw=%d nc=%d\n", nl, nw, nc);
}

//Every time the program encounters the first char of a word
//it counts one more word.  The Variable state records whether
//the program is currently in a word or not; initially it is
//"not in a word", which is assigned the value OUT.
//
//We use the symobolic constants IN and OUT to the literal 
//values 1 and 0 because they make the program more readable.
//
