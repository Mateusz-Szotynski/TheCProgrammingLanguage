#include <stdio.h>

int main(void)
{
    int c;
    int blanks = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++blanks;
        else if (blanks > 0)
        {  
            printf(" %c", c);
            blanks = 0;
        }
        else
        {
            printf("%c", c);
        }   
    }
}