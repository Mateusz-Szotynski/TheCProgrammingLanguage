#include <stdio.h>

int main(void)
{
    int i = 0;
    int lim = 100;
    char c, s[lim];
    while (i < lim - 1)
    {
        if((c = getchar()) != '\n')
        {
            if(c != EOF)
            {
                s[i] = c;
                ++i;
            }
            else
            {
                break;
            }
        }
    }
}