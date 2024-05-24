#include <stdio.h>

#define MAXLINE 1000
/* rewrite the longest-line program with line, longest, and max as external variables.*/

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getlines(void);
void copy(void);

/* print longest inpyt line; specialized version */

int main(void)
{
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getlines()) > 0)
        if (len > max)
        {
            max = len;
            copy();
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

int getlines(void)
{
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1
        && (c = getchar()) != EOF && c != '\n'; ++i)    /* until max and c != eof and c != new line*/
        line[i] = c;
    if (c == '\n')                  /* if c == new line then add \n to end of an array*/
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';                 /* at the end of array add null \0*/
    return i;
}

void copy(void)
{
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0');
        ++i;
}
