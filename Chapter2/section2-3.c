#include <stdio.h>

int main(void)
{

}

int stringlen(char s[])
{
    int i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}