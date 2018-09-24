#include <stdio.h>
#include <stdlib.h>

int min(int a, int b) 
{
    return (a <= b)? a : b;
}

int factorial(int x) {
    
    int i, fact;
    fact = 1;
    for ( i = x; i >= 1; i-- ) {
        fact *= i;
    }
    return fact;

}

void change_parameter(int n) {
    n = 7;
}

int main(int argc, char const *argv[])
{
    printf("%i\n\n", factorial(5));

    int a = 9;
    change_parameter(a);
    printf("%i\n", a);

    return 0;
}
