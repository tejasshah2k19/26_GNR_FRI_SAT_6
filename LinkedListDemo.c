#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; // self ref. structure
} *head = NULL, *last = NULL;

// dma
// malloc()  : block     --struct
// calloc()  : same size - continue --array

void addNode(int num)
{

    head = (struct node *)malloc(sizeof(struct node));
    head->data = num;
    head->next = NULL;
    last = head;
}

int main()
{

    addNode(10);

    printf(" %d ", head->data);
    return 0;
}
