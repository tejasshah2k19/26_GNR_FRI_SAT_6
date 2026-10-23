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

void selectionSort()
{
    int i,j,min,tmp;

    for (i = 0; i < SIZE; i++) //n 
    {
        min = i;
        for (j = i+1; j < SIZE; j++)// n 
        {
            if (arr[min] > arr[j])
            {
                min = j ;
            }
        }

        tmp = arr[i];
        arr[i] = arr[min];
        arr[min]  = tmp; 

    }
    //O(n^2)
}

int main()
{

    display();
    selectionSort();
    display();
    return 0;
}