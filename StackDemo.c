#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

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
    if (top == -1)
    {
        printf("\nStack is Empty ");
    }
    else
    {
        printf("\n%d removed", stack[top]);
        top--;
    }
}

void display()
{

    printf("\nElements in Stack:");
    for (int i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}

int main()
{

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60); // stack overflow

    display(); // 50 40 30 20 10 -> vertically

    return 0;
}