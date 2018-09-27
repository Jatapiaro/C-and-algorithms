#include <stdio.h>
#include <stdlib.h>

/*
* This function must change x
*/
void f(int * x_pointer) 
{
    *x_pointer = 5;
}

int main(int argc, char const *argv[])
{
    int x = 10;
    printf("X before: %i\n", x);
    f(&x);
    printf("X after: %i\n", x);
    return 0;
}
