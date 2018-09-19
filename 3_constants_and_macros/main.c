#include <stdio.h>
#include <stdlib.h>
#define A 16

int main(int argc, char const *argv[])
{
    /*
    * The 0 at the front of an integer
    * we told the compiler thaat the number is base 8
    */
    int a = 015;
    printf("%i\n", a);

    /*
    * The 0 at the front of an integer
    * we told the compiler thaat the number is base 16
    */
    int b = 0x1A;
    printf("%i\n", b);

    double c = 3.14E+5L;
    printf("%f\n", c);

    printf("%i\n", A);

    return 0;
}
