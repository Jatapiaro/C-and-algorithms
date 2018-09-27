#include <stdio.h>
#include <stdlib.h>

void fill_array(int arr[], int len) 
{
    for ( int i = 0; i < len; i++ ) {
        scanf("%i", &arr[i]);
    }
}

void print_array(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%i : ", arr[i]);
    }
    printf("\n");
}

int max_of_array(int arr[], int len)
{
    int max = -1;
    for (int i = 0; i < len; i++)
    {
        max = (arr[i] >= max)? arr[i] : max;
    }
    return max;
}

int main(int argc, char const *argv[])
{
    int len;
    scanf("%d", &len);
    int arr[len];
    fill_array(arr, len);
    print_array(arr, len);
    printf("Max of array = %i\n", max_of_array(arr, len));
}
