#include <stdio.h>

/* count digits, white space, others */
int main(void)
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;

    /* initializes all aray elements to 0 */
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    
    /* takes input from a user unitl EOF (CTRL + D)*/
    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
        
    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n",
        nwhite, nother);
    
    
}