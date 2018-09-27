#include <stdio.h>
#include <stdlib.h>

int factorial(int x)
{
    return (x == 0) ? 1 : x * factorial(x - 1);
}

float e_to_x(int x)
{
    float res = 1;
    int power = x;
    for ( int i = 1; i <= x; i++ ) {
        res += (power/factorial(i));
        power *= x;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int x;
    scanf("%d", &x);
    printf("Result: %f\n", e_to_x(x));
}
