#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int base, expo, aux;
    scanf("%i %i", &base, &expo);
    
    aux = 1;
    for ( int i = 1; i <= expo; i++ ) {
        aux *= base;
    }

    printf("Power(base, expo) = %i\n", aux);
}
