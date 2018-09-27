#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char str[100];
    scanf("%s", str);
    if ( str[10] != '\0' ) {
        printf("%c%c%c%c%c\n", str[5], str[6], str[7], str[8], str[9]);
    }
}
