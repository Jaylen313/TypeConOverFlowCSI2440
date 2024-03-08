
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Integers: \n");
    printf("Max value of int: %d\n", INT_MAX);
    printf("Min value of int: %d\n", INT_MIN);
    printf("\n");

    printf("long: \n");
    printf("Max value of long: %ld\n", LONG_MAX);
    printf("Min value of long: %ld\n", LONG_MIN);
    printf("\n");

    printf("float: \n");
    printf("Max value of float: %e\n", FLT_MAX);
    printf("Min value of float: %e\n", FLT_MIN);
    printf("\n");

    printf("char: \n");
    printf("Max value of char: %d\n", CHAR_MAX);
    printf("Min value of char: %d\n", CHAR_MIN);
    printf("\n");

    printf("double: \n");
    printf("Max value of double: %e\n", DBL_MAX);
    printf("Min value of double: %e\n", DBL_MIN);
    printf("\n");

    printf("Overflow demonstration: \n");
    printf("\n");

    printf("Overflow of int: %d\n", INT_MAX + 1);
    printf("\n");
    printf("Overflow of long: %ld\n", LONG_MAX + 1);
    printf("\n");
    printf("Overflow of float: %e\n", FLT_MAX * 10);
    printf("\n");
    printf("Overflow of char: %d\n", CHAR_MAX + 1);
    printf("\n");
    printf("Overflow of double: %e\n", DBL_MAX * 10);
    printf("\n");

    return 0;         
}