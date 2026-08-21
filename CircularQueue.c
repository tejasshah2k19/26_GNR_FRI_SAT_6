#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int cQueue[SIZE];

int front = -1;
int rear = -1;

void enQueue(int data)
{
    // full
    if (front == 0 && rear == SIZE - 1)
    {
        printf("\nQueue is full : %d", data);
    }
    else if (rear == front - 1)
    {
        printf("\nQueue is full : %d", data);
    }
    else if (rear == SIZE - 1)
    {
        // circular - cycle
        rear = 0;
        cQueue[rear] = data;
    }
    else
    {
        // simple queue
        rear++;
        cQueue[rear] = data;
        if (front == -1)
        {
            front = 0;
        }
    }
}

void deQueue()
{
}

void display()
{

    if (front == -1)
    {
        printf("\nQueue is empty : display is not allowed ");
    }
    else
    {

        if (front <= rear)
        {
            // simple queue
            for (int i = front; i <= rear; i++)
            {
                printf(" %d", cQueue[i]);
            }
        }
        else
        {
            // circular queue
            for (int i = front; i < SIZE; i++)
            {
                printf(" %d ", cQueue[i]);
            }
            for (int i = 0; i <= rear; i++)
            {
                printf(" %d ", cQueue[i]);
            }
        }
    }
}

int main()
{

    int choice, data;

    while (1)
    {
        printf("\n1 For Add\n2 For Remove\n3 For Display\n0 For Exit\nEnter choice :- ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &data);
            enQueue(data);
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
        }
    }

    return 0;
}