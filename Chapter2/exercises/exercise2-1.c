#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    char c = CHAR_MAX;
    short s = SHRT_MAX;
    int i = INT_MAX;
    long long l = LONG_MAX;
    float f = FLT_MAX;
    double d = DBL_MAX;
    long double ld = LDBL_MAX;

    printf("char: %d\nshort: %d\nint: %d\nlong: %d\nfloat: %f\ndouble: %f\nlong double: %f\n", c, s, i, l, f, d, ld);
}