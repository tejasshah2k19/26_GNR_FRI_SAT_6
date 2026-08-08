#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 5

char stack[SIZE];
int top = -1;

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

void push(char data)
{
    if (top == SIZE - 1)
    {
        printf("\nStack OverFlow => %c", data);
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
        printf("\n%c removed", stack[top]);
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
            printf("%c", stack[i]);
        }
    }
}

int main()
{

    //    char name;//single character  -> r
    char name[30]; // multiple character  -> royal

    printf("\nEnter the string : ");
    scanf("%s", &name); // royal\0

    for(int i=0; name[i] != '\0' ;i++){
        push(name[i]);//0:r 1:o 2:y 3:a 4:l 
    }

    

    //royal -> push 


    display();//layor 

    return 0;
}
