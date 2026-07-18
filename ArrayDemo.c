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

void removeItem(int location)
{
    for (int i = location - 1; i < SIZE - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[SIZE - 1] = 0;
}

void linearSearch(int key)
{
    // 600 +
    // 60 -
    int flag = 0; // false - not found
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
    }

    if (flag==1)
    {
        printf("\n%d found ", key);
    }
    else
    {
        printf("\n%d not found ", key);
    }
}

//linear search  2  will return -1 if item not found 
//linear search 2  will return index if item found 

int linearSearch2(int key)
{
    // 600 +
    // 60 -
    int flag = 0; // false - not found
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
    }

    if (flag==1)
    {
        printf("\n%d found ", key);
    }
    else
    {
        printf("\n%d not found ", key);
    }
    return 111;
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

    linearSearch(600); // 600 found
    linearSearch(60);  //60 not found

    printf(" %d ",linearSearch2(600));//2 
    printf(" %d ",linearSearch2(60));//-1 
    
    return 0;
}










