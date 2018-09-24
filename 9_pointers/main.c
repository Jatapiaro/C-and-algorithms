#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val1, val2;
};

typedef struct Node Node;

int main() 
{

    /*
    * To declare a pointer with put the type of the variable that
    * we has its address.
    * This mean that this pointer points to that variable.
    */
    int a;
    a = 5;
    int * a_pointer;
    // a_pointer takes the addres of a
    a_pointer = &a;
    *a_pointer = 7;

    printf("Addres of a is %p and the value is %i\n", a_pointer, *a_pointer);

    /*
    * The following to lines are similar or equals in someway.
    */
    //In this one we allocate memory for 10 elements
    int arr[10];
    // This is void so we need to make them the same type
    int * arr2 = (int *) malloc(sizeof(int) * 10);
    
    //This two are equivalents
    arr2[0] = 9;
    *(arr2 + 0) = 7;

    printf("%i : %i\n", arr2[0]);

    Node * node_pointer;
    node_pointer++; //This increment the pointer 8 times 


    return 0;

}