#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a;
    scanf("%i", &a);
    printf("Value of a is: %i : %c\n", a, (char)a);


    /*
    * A string is an array of characters
    */
    char b[100];
    scanf("%s", &b);
    printf("%s\n", b);

    return 0;
}
