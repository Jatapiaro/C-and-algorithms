#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node 
{
    int value;
    struct Node * next;
};

typedef struct Node Node;

struct Stack 
{
    int size;
    Node * head;
};

typedef struct Stack Stack;

Stack * create_stack() 
{
    
    Stack * s = (Stack *)malloc(sizeof(Stack));
    s->size = 0;
    s->head = NULL;
    return s;

}

bool is_empty(Stack * s) 
{
    return s->size == 0;
}

void push_node(Stack * s, int value)
{
    Node * n = (Node *) malloc(sizeof(Node));
    n->value = value;
    n->next = s->head;
    s->head = n;
    s->size++;
}

int pop_node(Stack * s) 
{
    Node * n = s->head;
    s->head = n->next;
    s->size--;
    return n->value; 
}

int main(int argc, char const *argv[])
{
    Stack * s = create_stack();
    for ( int  i = 0; i < 10; i++ ) {
        push_node(s, i);
    }
    while( !is_empty(s) ) {
        int val = pop_node(s);
        printf("%i : ", val);
    }
    printf("\n");
    return 0;
}
