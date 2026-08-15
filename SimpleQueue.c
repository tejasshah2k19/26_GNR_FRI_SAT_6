#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int queue[SIZE];
int rear = -1;
int front = -1;

void enQueue(int data)
{
    rear++;
    queue[rear] = data;
    if (front == -1)
    {
        front = 0;
    }
}

void deQueue()
{
    printf("\n%d removed ...... ",queue[front]);
    front++; 
}

void display()
{
    for(int i=front;i<=rear;i++){
        printf(" %d",queue[i]);
    }
}

int main()
{

    int choice;
    int data;

    // while(true) -> 0:false
    while (-1)
    {
        printf("\n1 For EnQeueu\n2 For Dequeue\n3 For Display\n0 Exit");
        printf("\nEnter choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            enQueue(data);
            break;
        case 1 + 1:
            deQueue();
            break;
        case 3:
            display();
            break;
        case 2 - 2:
            exit(0);
        default:
            break;
        }
    }

    return 0;
}