//----- Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.-----

#include <stdio.h>
struct Marks
{
    int rollno;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
} info[5];

void main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("ENTER THE ROLL NO.:\n");
        scanf("%d", &info[i].rollno);
        printf("ENTER THE NAME\n");
        fflush(stdin);
        gets(info[i].name);
        printf("ENTER THE MARKS OBTAINED IN CHEMISTRY (OUT OF 100):\n");
        scanf("%d", &info[i].chem_marks);
        printf("ENTER THE MARKS OBTAINED IN MATHS (OUT OF 100):\n");
        scanf("%d", &info[i].maths_marks);
        printf("ENTER THE MARKS OBTAINED IN PHYSICS (OUT OF 100):\n");
        scanf("%d", &info[i].phy_marks);
    }

    float percentage;
    for (int i = 0; i < 5; i++)
    {
        printf("THE PERCENTAGE OF STUDENT %d is:\n", i + 1);
        percentage = ((info[i].chem_marks + info[i].phy_marks + info[i].maths_marks ) / 300.0) * 100;
        printf("%f\n", percentage);
    }
}