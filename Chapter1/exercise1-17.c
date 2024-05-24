#include <stdio.h>
#define MAX 1000
#define MIN 80

/* write a program to print all input lines that are longer than 80 characters*/

int getlines(char line[]);
void printLines(char lines[], int len);

int main(void)
{
    char lines[MAX];
    int len;
    int counter = 0;

    while ((len = getlines(lines)) != 0)
    {
        if (len > 80)
        {
            printLines(lines, len);
        }
    }
    return 0;
}

void printLines(char lines[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%c", lines[i]);
    }
    printf("\n");
}

int getlines(char string[])
{
    char c;
    int counter = 0;
    while ((c = getchar()) != EOF)     /* till character is not NULL */
    {
        if (c == '\n')                  /* when new line insert NULL */
        {               
            string[counter] = '\0';
            return counter;
        }
        else
        {
            string[counter] = c;
            ++counter;
        }
    }
    return counter;
}
