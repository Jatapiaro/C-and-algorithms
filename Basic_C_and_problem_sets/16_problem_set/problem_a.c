#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, aux;
    scanf("%i %i", &a, &b);

    aux = a;
    a = b; 
    b = aux;

    printf("[ A: %i, B: %i ]\n", a, b);

    return 0;
}
