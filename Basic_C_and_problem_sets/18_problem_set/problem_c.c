#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void init_array(int arr[])
{
    for (int i = 0; i < 256; i++)
    {
        arr[i] = 0;
    }
}

void print_result(int arr[])
{
    for (int i = 0; i < 256; i++)
    {
        if ( arr[i] > 0 )
        {
            printf("%c : %i\n", i, arr[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    char str[] = "C language is a very powerful language that allows programmers to fully control their computers ";
    int characters[256];
    init_array(characters);

    for (int i = 0; i < 201; i++)
    {
        char c = tolower(str[i]);
        if ( c != '\0' ) {
            characters[c] = characters[c] + 1;
        } else {
            break;
        }
    }


    print_result(characters);
    return 0;
}
