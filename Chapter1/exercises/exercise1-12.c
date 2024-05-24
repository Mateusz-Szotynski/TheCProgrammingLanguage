#include <stdio.h>

/* Write a program that prints its input one word per line */
int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            printf("\n");
        else
            printf("%c", c);
    }
    
}