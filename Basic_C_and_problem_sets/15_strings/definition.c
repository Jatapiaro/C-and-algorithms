#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /*
    * A string is an array of char
    */ 
    char c;
    for ( c = 'a'; c <= 'z'; c++ ) {
        printf("%d -> %c\n", c, c);
    }

    char str [10];
    str[0] = 'a';
    str[1] = 'b';
    str[2] = '\0';
    str[3] = 'j';
    printf("%s\n", str);

    char str2[11] = "hellohello";
    //In this case the \0 is added automatically;
    printf("%s\n", str2);
    char str3[11] = "hellohello";
    printf("%s\n", str3);

    int res = strcmp(str2, str3);
    printf("%d\n", res); 

    return 0;
}
