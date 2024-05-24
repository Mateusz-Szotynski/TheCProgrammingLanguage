#include <stdio.h>

#define OUT 0;
#define IN 1;

/* Write a program to print a histogram of the lengths of words in its input. */
int main(void)
{
    int c,state;

    state = OUT;

    int i = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
            for (; i > 0; --i)
            {
                printf("#");
            }
            printf("\n");
        }
        else
        {
            ++i;
            state = IN; 
        }
    }
    printf("%i", i);
}