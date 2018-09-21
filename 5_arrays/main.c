#include <stdio.h>
#include <stdlib.h>

void print_integer_array(int arr[], int len) {
    int i;
    for ( i = 0; i < len; i++ ) {
        printf("%i : ", arr[i]);
    }
    printf("\n");
}

void print_char_array(char arr[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%c : ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    print_integer_array(arr, 10);

    char arr2[10] = { 'a', 'f', 'c', 'r' };
    print_char_array(arr2, 10);

    return 0;
}
