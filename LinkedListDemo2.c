#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;

// malloc()
// calloc()
void addNode(int num)
{
    // first node --- head -- is null
    if (head == NULL)
    {

        head = (struct node *)malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = num;
        newNode->next = NULL;
        last->next = newNode;
        last = newNode;
    }
}

void display()
{
    struct node *p = head;
    printf("\nList of Items : => ");
    while (p != NULL)
    {
        printf(" %d ", p->data); // 1000 10 20 30 40 50 
        p = p->next;//10 20 NULL
    }
}

void addNodeBEG(int num){

    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = num; 
    newNode->next = head; 
    head = newNode; 
}


void countNode(){
    int totalNode =0;
    struct node *p = head; 

    while(p != NULL){
        totalNode++;
        p=p->next; 
    }
        
    printf("\nTotal Node = %d",totalNode);//6 
}

void search(int searchItem){
    
}


//
void removeBEG(){

    struct node *p;     
    p = head; 
    head = head->next; 
    free(p); 

}

void removeLast(){
    struct node *p = head; 

    while(p->next != last){
        p=p->next; 
    }

    last = p; 
    p = p->next; 

    last->next  = NULL; 
    free(p);
 
}

//removeByLocation(3)
void removeByLoction(int location)
{


}

//removeByValue(30)
void removeByValue(int value){
    struct node *p = head; 
    struct node *q = head;
    struct node *r; 


    while(p!= NULL){

        if(p->data == value){
            break; 
        }
        p=p->next;
    }
    if(p!=NULL){

        r = p->next; 

        while(q->next != p){
            q = q->next; 
        }

        q->next = r; 
        free(p); 


    }else{
        printf("\nInvalid Source : %d",value);
    }



}


int main()
{

    //insert node at the end 
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);
     
    //display - list all 
    display();//10 20 30 40 50 

    
    addNodeBEG(1000);

    display();//1000 10 20 30 40 50 
    
    countNode(); // 6 
 
    search(2500); // not found 
    search(30);// found 

    ///1000 10 20 30 40 50 
    display();//1000 10 20 30 40 50 
    printf("\n Removing First Node => ");
    removeBEG();
    display();//10 20 30 40 50 

    return 0;
}