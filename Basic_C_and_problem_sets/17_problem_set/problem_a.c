#include <stdio.h>
#include <stdlib.h>

int factorial(int x) {
    return (x == 0)? 1 : x * factorial( x - 1 );
}

int comb(int n, int p) 
{
    int n_factorial = factorial(n);
    int p_factorial = factorial(p);
    int n_p_factorial = factorial(n-p);
    return (n_factorial) / (p_factorial * (n_p_factorial));
}

int main(int argc, char const *argv[])
{
    int n, p;
    scanf("%i %i", &n, &p);
    printf("Comb(%i, %i) = %i\n", n, p, comb(n, p));
}
