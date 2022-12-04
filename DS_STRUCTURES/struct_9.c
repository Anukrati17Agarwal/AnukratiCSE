//  Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students. - Write a function to print the names of all the students having age 14.
#include <stdio.h>
struct student
{
    int r;
    char name[30];
    int age;
    char address[50];
} s[15];

void AGE_14()
{
    for (int i = 0; i < 15; i++)
    {
        if (s[i].r == 14)
        {
            printf("THE DETAILS OF ALL THE STUDENTS HAVING AGE 14 ARE:\n");
            printf("ROLL NO, %d", s[i].r);
            printf("NAME %s", s[i].name);
            printf("AGE  %d", s[i].age);
            printf("ADDRESS %s", s[i].address);
        }
    }
}
void EVEN_ROLL_N0()
{
    for (int i = 0; i < 15; i++)
    {
        if (s[i].r % 2 == 0)
        {
            printf("THE DETAILS OF ALL THE STUDENTS HAVING AGE 14 ARE:\n");
            printf("ROLL NO, %d", s[i].r);
            printf("NAME %s", s[i].name);
            printf("AGE  %d", s[i].age);
            printf("ADDRESS %s", s[i].address);
        }
    }
}
void USER_GIVEN_ROLLNO()
{
    int i;
    printf("ENETR THE ROLL NO. WHOSE DETAILS YOU WANT:\n");
    scanf("%d", &i);
    printf("ROLL NO, %d\n", s[i].r);
    printf("NAME %s\n", s[i].name);
    printf("AGE  %d\n", s[i].age);
    printf("ADDRESS %s\n", s[i].address);
}
int main()
{
    printf("ENTER THE ROLL NO. , NAME , AGE(11 to 14) AND ADDRESS OF STUDENTS(>10)\n");

    for (int i = 0; i < 1; i++)
    {
        scanf("%d", &s[i].r);
        fflush(stdin);
        gets(s[i].name);
        // scanf("%s",s.name);
        scanf("%d", &s[i].age);
        fflush(stdin);
        gets(s[i].address);
    }
    EVEN_ROLL_N0();
    AGE_14();
    USER_GIVEN_ROLLNO();
}