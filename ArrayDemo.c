#include <stdio.h>
#define SIZE 5

int arr[SIZE]; // SIZE -> constant -> read only

void display()
{
    printf("\nArray Data : ");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void insertItem(int location, int data)
{
    for (int i = SIZE - 1; i != location - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[location - 1] = data;
}

int main()
{

    display(); // 0 0 0 0 0
    insertItem(1, 100);
    insertItem(2, 200);
    insertItem(3, 300);
    display(); // 100 200 300 0 0
    insertItem(1, 400);
    insertItem(3, 600);
    display(); // 400 100 600 200 300
    return 0;
}