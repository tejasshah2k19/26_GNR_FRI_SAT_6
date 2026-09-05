#include <stdio.h>

struct student
{
    char name[30];
    int maths;
    int sci;
    int eng;
    float perc;
    char grade;
};

int main()
{

    struct student s[5]; // dot operator

    int *p;            // p can store adderss of any integer variable
    struct student *q; // q can store address of any struct student
                       // arrow operator

    q = &s[0];

    for (int i = 1; i <= 3; i++)
    {

        printf("enter name and marks of three subjects ");
        scanf("%s%d%d%d", q->name, &q->maths, &q->sci, &q->eng);

        q->perc = (q->maths + q->sci + q->eng) / 3.0;

        if (q->perc >= 35)
        {
            q->grade = 'P';
        }
        else
        {
            q->grade = 'F';
        }

        printf("\nName = %s Maths = %d sci = %d eng  = %d perc = %f grade = %c ", q->name, q->maths, q->sci, q->eng, q->perc, q->grade);

        // 1st index ?
        //
        // q = &s[1];
        q++;
    }

    /*
        Name    Maths   Sci     Eng     Perc    Grade
        Ram     66      66      66      66      P
        Sam     77      77      77      77      P 
                
    
    */

    return 0;
}