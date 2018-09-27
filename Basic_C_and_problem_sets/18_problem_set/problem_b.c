#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    int day, month, year;
    scanf("%i/%i/%i", &day, &month, &year);
    printf("%i\n", (360 * year) + (month * 30) + day);
    return 0;

}
