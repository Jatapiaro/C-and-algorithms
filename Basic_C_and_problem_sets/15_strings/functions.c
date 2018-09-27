#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100] = "hello";
    char str2[11] = " world";

    strcat(str, str2);
    printf("%s\n", str);
    strcpy(str, "hey");
    printf("%s\n", str);
    return 0;
}
