#include <stdio.h>

#define ALPHABET 27
#define A 0
#define B 1
#define C 2
#define D 3
#define E 4
#define F 5
#define G 6
#define H 7
#define I 8
#define J 9
#define K 10
#define L 11
#define M 12
#define N 13
#define O 14
#define P 15
#define Q 16
#define R 17
#define S 18
#define T 19
#define U 20
#define V 21
#define W 22
#define X 23
#define Y 24
#define Z 25
#define OTHER 26


/* write a program to print a histogram of the frequencies of different characters in its input */
int main(void)
{
    int alphabet[ALPHABET];
    for (int i = 0; i < ALPHABET; ++i)
        alphabet[i] = 0;
    
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == 'a' || c == 'A')
            alphabet[A]++;
        else if (c == 'b' || c == 'B')
            alphabet[B]++;
        else if (c == 'c' || c == 'C')
            alphabet[C]++;
        else if (c == 'd' || c == 'D')
            alphabet[D]++;
        else if (c == 'e' || c == 'E')
            alphabet[E]++;
        else if (c == 'f' || c == 'F')
            alphabet[F]++;
        else if (c == 'g' || c == 'G')
            alphabet[G]++;
        else if (c == 'h' || c == 'H')
            alphabet[H]++;
        else if (c == 'i' || c == 'I')
            alphabet[I]++;
        else if (c == 'j' || c == 'J')
            alphabet[J]++;
        else if (c == 'k' || c == 'K')
            alphabet[K]++;
        else if (c == 'l' || c == 'L')
            alphabet[L]++;
        else if (c == 'm' || c == 'M')
            alphabet[M]++;
        else if (c == 'n' || c == 'N')
            alphabet[N]++;
        else if (c == 'o' || c == 'O')
            alphabet[O]++;
        else if (c == 'p' || c == 'P')
            alphabet[P]++;
        else if (c == 'q' || c == 'Q')
            alphabet[Q]++;
        else if (c == 'r' || c == 'R')
            alphabet[R]++;
        else if (c == 's' || c == 'S')
            alphabet[S]++;
        else if (c == 't' || c == 'T')
            alphabet[T]++;
        else if (c == 'u' || c == 'U')
            alphabet[U]++;
        else if (c == 'w' || c == 'W')
            alphabet[W]++;
        else if (c == 'x' || c == 'X')
            alphabet[X]++;
        else if (c == 'y' || c == 'Y')
            alphabet[Y]++;
        else if (c == 'z' || c == 'Z')
            alphabet[Z]++;
        else
            alphabet[OTHER]++;
    }
    for (int i = 0; i < ALPHABET; ++i)
    {
        if (alphabet[i] != 0)
            printf("alphabet[%d] = %d\n", i, alphabet[i]);
    }
}