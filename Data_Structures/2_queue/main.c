#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int value;
    struct Node * next;
};

typedef struct Node Node;

struct Queue
{
    int size;
    Node * head;
    Node * tail;
};

typedef struct Queue Queue;

Queue * create_queue() 
{
    Queue * q = ( Queue * )malloc(sizeof(Queue));
    q->size = 0;
    q->head = q->tail = NULL;
    return q;
}

bool is_empty(Queue * q) 
{
    return q->size == 0;
}

void push_node(Queue * q, int val) 
{
    Node * node = ( Node * )malloc(sizeof(Node));
    node->value = val;  
    node->next = NULL;

    if ( is_empty(q) ) {

        q->head = q->tail = node;

    } else {

        Node * last_in_queue = q->tail;
        last_in_queue->next = node;
        q->tail = node;

    }
    q->size++;
}

int pop_node(Queue * q) 
{
    Node * to_pop = q->head;
    Node * new_head = to_pop->next;
    q->head = new_head;
    q->size--;  
    int val = to_pop->value;
    free(to_pop);
    return val;
}

int main(int argc, char const *argv[])
{
    Queue * q = create_queue();
    for ( int i = 0; i < 10; i++ ) {
        push_node(q, i);
    }
    push_node(q, 99);
    while(!is_empty(q)) {
        printf("%i : ", pop_node(q));
    }
    printf("\n");
    return 0;
}
