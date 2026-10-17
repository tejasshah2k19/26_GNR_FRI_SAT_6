#include <stdio.h>
#define SIZE 7

int arr[] = {76, 85, 94, 30, 98, 75, 67};

void display()
{
    printf("\nArray : ");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d", arr[i]);
    }
}

void bubbleSort()
{
    int j, i, tmp;

    for (i = 0; i < SIZE; i++) //n 
    {
        for (j = 0; j < SIZE - 1; j++)// n 
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    //O(n^2)
}

int main()
{

    display();
    bubbleSort();
    display();
    return 0;
}