#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int stack[SIZE];
int top = -1;


// char ?

int isEmpty()
{
    if (top == -1)
    {
        return 1; // true
    }
    else
    {
        return 0; // false
    }
}

void push(int data)
{
    if (top == SIZE - 1)
    {
        printf("\nStack OverFlow => %d", data);
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("\nStack is Empty : pop() ");
    }
    else
    {
        printf("\n%d removed", stack[top]);
        top--;
    }
}

void display()
{

    if (isEmpty())
    {
        printf("Stack is empty : display()");
    }
    else
    {
        printf("\nElements in Stack:");
        for (int i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
}

void peak()
{
    if (isEmpty())
    {
        printf("\nStack is Empty: do not peak()");
    }
    else
    {
        printf(" %d ", stack[top]);
    }
}


void peep(int location){
    if(isEmpty()){
        printf("\nStack is Empty: do not peep()");
    }else{
        int index = top - location + 1; 
        printf("\n%d",stack[index]);
    }
}

int main()
{
    int choice;
    int location;
    int data;

    while (1)
    {
        printf("\n\n 0 For exit\n1 For PUSH\n2 For POP\n3 for PEEP\n4 For Peak\n5 For Display");
        printf("\nenter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter data : ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("\nEnter location");
            scanf("%d",&location);
            peep(location);
            break;
        case 4:
            peak();
            break;
        case 5:
            display();
            break;
        default:
            break;

        case 0:
            exit(0);
        }
    }

    return 0;
}