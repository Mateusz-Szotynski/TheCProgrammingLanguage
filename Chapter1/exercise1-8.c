#include <stdio.h>

int main(void)
{
    int c;
    int counter = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
            ++counter;
        if (c =='\n')
            printf("%d\n", counter);
    }
}