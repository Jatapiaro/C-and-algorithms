#include <stdio.h>
#include <stdlib.h>

int sum_of_array(int arr[], int size) 
{
    int i, sum;

    for ( i = sum = 0; i < size; i++ ) 
    {
        sum += arr[i];
    }

    return sum;
}

void get_input(int arr[]) 
{

    int n, i;
    printf("Type the size of the array: ");
    scanf("%i", &n);

    for ( i = 0; i < n; i++ ) {
        printf("Type in ARR[%i]: ", i);
        scanf("%i", &arr[i]);
    }

    return n;

}

int main(int argc, char const *argv[])
{
    int arr[100];
    int n = get_input(arr);
    printf("Sum of array: %i\n", sum_of_array(arr, n));
    return 0;
}
