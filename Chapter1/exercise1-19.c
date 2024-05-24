#include <stdio.h>
#define MAX 1000

void reverse(char input[], int length, char output[]);
int getlines(char string[]);
void printline(char string[], int length);

int main(void)
{
    char string[MAX], reversed[MAX];
    int length;
    while ((length = getlines(string)) != 0)
    {
        reverse(string, length, reversed);
        printline(reversed, length);
    }
}

void printline(char string[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");
}

void reverse(char input[], int length, char output[])
{
    int j = 0;
    for (int i = length - 1; i >= 0; --i)
    {
        output[j] = input[i];
        ++j;
    }
}

int getlines(char string[])
{
    char c;
    int counter = 0;
    while ((c = getchar()) != EOF)
    {
        string[counter] = c;
        ++counter;
    }
    return counter;
}