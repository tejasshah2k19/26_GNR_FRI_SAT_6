#include<stdio.h>
#include<stdlib.h>


int main(){

    int *p;
    int *arr;
    int i;
    p = (int*) malloc(sizeof(int));//gcc -> int : 4 byte , TC : int : 2 byte 
    arr =(int*) calloc(5,sizeof(int));

    printf("enter value : ");
    scanf("%d",p);

    printf("\n p = %d",*p);
    
    //GCC 

    for(i=0;i<5;i++){
        printf("enter value");
        scanf("%d",&arr[i]);
    }


    for(i=0;i<5;i++){
        printf(" %d", arr[i]);
    }

    return 0; 
}