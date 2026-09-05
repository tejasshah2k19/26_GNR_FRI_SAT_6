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

void singleStruct()
{
    struct student s; // name maths sci eng perc grade
    struct student m; // name maths sci eng perc grade

    printf("\nEnter name and marks of three subjects");
    scanf("%s%d%d%d", &s.name, &s.maths, &s.sci, &s.eng);

    s.perc = (s.maths + s.sci + s.eng) / 3.0;

    if (s.perc >= 35)
    {
        s.grade = 'p';
    }
    else
    {
        s.grade = 'F';
    }

    printf("\nName\tMaths\tSci\tEng\tPerc\tGrade");
    printf("\n%s\t%d\t%d\t%d\t%.2f\t%c", s.name, s.maths, s.sci, s.eng, s.perc, s.grade);
}

int main()
{

    struct student p[5]; // p[0]{name maths sci eng perc grade} p[1]{name maths sci eng perc grade} p[2]=> p[3]=> p[4]=>

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter name and marks of three subjects");
        scanf("%s%d%d%d", &p[i].name, &p[i].maths, &p[i].sci, &p[i].eng);

        p[i].perc = (p[i].maths + p[i].sci + p[i].eng) / 3.0;

        if (p[i].perc >= 35)
        {
            p[i].grade = 'p';
        }
        else
        {
            p[i].grade = 'F';
        }
    }

    printf("\nName\tMaths\tSci\tEng\tPerc\tGrade");
    for (int i = 0; i < 3; i++)
    {
        printf("\n%s\t%d\t%d\t%d\t%.2f\t%c", p[i].name, p[i].maths, p[i].sci, p[i].eng, p[i].perc, p[i].grade);
    }


    //find who got the max percentage --> 

    //pointer 


    return 0;
}