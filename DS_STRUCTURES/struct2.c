#include <stdio.h>
#include <string.h>
struct student
{
    int r;
    char name[20];
    int marks;
};

struct student s[5];
int main()
{
    for (int i = 0; i < 5; i++)

    {
        printf("ENTER THE ROLL NO. OF STUDENT:\n");
        scanf("%d", &s[i].r);
        printf("ENTER THE NAME OF STUDENT: \n");
        fflush(stdin);
        gets(s[i].name);
        // scanf("%s",s.name);
        printf("ENTER THE MARKS OF STUDENT: \n");
        scanf("%d", &s[i].marks);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("ROLL NO. %d\n", s[i].r);
        printf("NAME     %s\n", s[i].name);
        printf("MARKS    %d\n", s[i].marks);
    }

    return 0;
}
