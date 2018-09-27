#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    float my_real, my_new_real;
    my_real = 4.5;
    my_new_real = my_real + 1.7;
    printf("My var has the value of: %f\nAnd my new vas has the value of: %f\n\n", my_real, my_new_real);

    double my_double, my_new_double;
    my_double = 7.8;
    my_new_double = my_double * my_double * my_double;
    printf("My var has the value of: %f\nAnd my new var has the value of: %f\n\n", my_double, my_new_double);

    char c;
    c = 'a';
    printf("The char %c has the value of %i\n\n", c, c);

    /*
    * A string 
    */
    char * my_string = "hello word";
    printf("%s\n", my_string);

    return 0;
}
