#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int htoi(const char s[]);
int getLength(const char s[], int i);
int getValue(const char s);
double power(double x, double y);


int main(void)
{
    int x = htoi("0x");
    printf("%d\n", x);
    return 0;
}

int htoi(const char s[])
{
    int i;
    int value = 0;
    double sum = 0;
    if ((s[0] == '0' && s[1] == 'x') || (s[0] == '0' && s[1] == 'X'))
    {
        i = 2;
    }
    else
    {
        i = 0;
    }
    int sixteenthPlace = getLength(s, i);
    printf("%d\n", sixteenthPlace);
    while (s[i] != '\0')
    {
        if ((s[i] >= '0' && s[i] <= 9) || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            value = getValue(*(s + i));
            sum += (double)value * power(16, (double)sixteenthPlace);
            sixteenthPlace--;
        }
    }
    return sum;
}

double power(double x, double y)
{
    for  (;y >= 0; --y)
    {
        x *= x;
    }
    return x;
}

int getValue(const char s)
{
    enum hex { A = 10, B = 11, C = 12, D = 13, E = 14, F = 15};
    int value;
    switch (s)
    {
        case '1':
            value = 1;
            break;
        case '2':
            value = 2;
            break;
        case '3':
            value = 3;
            break;
        case '4':
            value = 4;
            break;
        case '5':
            value = 5;
            break;
        case '6':
            value = 6;
            break;
        case '7':
            value = 7;
            break;
        case '8':
            value = 8;
            break;
        case '9':
            value = 9;
            break;
        case 'a':
        case 'A':
            value = A;
            break;
        case 'b':
        case 'B':
            value = B;
            break;
        case 'c':
        case 'C':
            value = C;
            break;
        case 'd':
        case 'D':
            value = D;
            break;
        case 'e':
        case 'E':
            value = E;
            break;
        case 'f':
        case 'F':
            value = F;
            break;
        default:
            break;
    }
}

int getLength(const char s[], int i)
{
    int x = i;
    for (;s[i] != '\0'; i++)
    {}
    return i - x;
}