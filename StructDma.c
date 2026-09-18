#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int maths;
    int sci;
    int eng;
    float perc;
};

void addStudent(){
    struct student *s = NULL;
    s = (struct student *)malloc(sizeof(struct student));
    printf("\nEnter name and marks of three subjects");
    scanf("%s%d%d%d",s->name,&s->maths,&s->sci,&s->eng);
    s->perc = (s->maths  + s->sci + s->eng) / 3.0; 
    
    printf("\nName = %s",s->name);
    printf("\nMaths = %d",s->maths);
    printf("\nSci = %d",s->sci);
    printf("\nEng = %d",s->eng);
    printf("\nPerc = %f",s->perc);    
}

int main()
{

    // struct student s;//implicit {name,maths,sci,eng,perc}
    // dot operator
    // s.name , s.maths
    // malloc
    // calloc --- n number of element with s Size
    addStudent();
    

    return 0;
}