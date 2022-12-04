#include <stdio.h>
#include <string.h>
struct student
{
    int r;
    char name[20];
    int marks[6];
};

struct student s;
int main()
{
    printf("ENTER THE ROLL NO. OF STUDENT:\n");
    scanf("%d", &s.r);
    printf("ENTER THE NAME OF STUDENT: \n");
    fflush(stdin);
    gets(s.name);
    // scanf("%s",s.name);
    printf("ENTER THE MARKS OF STUDENT IN FOUR SUBJECTS: \n");
    for (int i = 0; i <6; i++)
    {
        scanf("%d",&s.marks[i]);
    }
    
        printf("ROLL NO. %d\n", s.r);
        printf("NAME     %s\n", s.name);
        for (int i = 0; i < 6; i++)
        {
            printf("MARKS    %d\n", s.marks[i]);
        }
        
        
    





























    // for (int i = 0; i < 6; i++)


    // {
    //     printf("ENTER THE ROLL NO. OF STUDENT:\n");
    //     scanf("%d", &s[i].r);
    //     printf("ENTER THE NAME OF STUDENT: \n");
    //     fflush(stdin);
    //     gets(s[i].name);
    //     // scanf("%s",s.name);
    //     printf("ENTER THE MARKS OF STUDENT: \n");
    //     scanf("%d", &s[i].marks);
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("ROLL NO. %d\n", s[i].r);
    //     printf("NAME     %s\n", s[i].name);
    //     printf("MARKS    %d\n", s[i].marks);
    // }

    return 0;
}