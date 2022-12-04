#include<stdio.h>
#include<string.h>
struct student
{
    int r ;
    char name[20];
    int marks;

} ;

struct student s ;
int main()
{
    printf("ENTER THE ROLL NO. OF STUDENT:\n");
    scanf("%d", &s.r);
    printf("ENTER THE NAME OF STUDENT: \n");
    fflush(stdin);
    gets(s.name);
    // scanf("%s",s.name);
    printf("ENTER THE MARKS OF STUDENT: \n");
    scanf("%d",&s.marks);
    printf("ROLL NO. %d\n",s.r);
    printf("NAME %s\n", s.name);
    printf("MARKS %d\n",s.marks);
    
}




 
