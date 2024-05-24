#include <stdio.h>
#define MAX 1000

/* write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines */

int getlines(char line[]);

int main(void)
{
    char line[MAX];
    int length;
    while ((length = getlines(line)) != 0)
    {
        for (int i = 0; i < length; i++)
        {
            printf("%c",line[i]);
        }
        printf("\n");
    }
    
    
}

int getlines(char line[])
{
    char c;
    int counter = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            if (line[counter - 1] == ' ' || line[counter - 1] == '\t')
            {

            }
            else
            {
                line[counter] = c;
                ++counter;
            }
        }
        else
        {
            line[counter] = c;
            ++counter;
        }
    }
    line[counter] = '\0';
    return counter;
}