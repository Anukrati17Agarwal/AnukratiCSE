#include <stdio.h>
#include <string.h>
struct marks
{
    int roll_no[5];
    int name [5];
    int chem_marks[5];
    int phy_marks[5];
    int maths_marks[5];
    int percent[5];
} m; 

int main()
{
    int sum;
    int percent;
    printf("ENTER THE ROLL NO. OF STUDENTS AND MARKS IN CHEM, MATHS, PHY\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d%d%d%d",&m.roll_no[i],&m.chem_marks[i],&m.maths_marks);
        fflush(stdin);
        gets(m.name[i]);
    }
        for (int i = 0; i < 5; i++)
    {
        

    }
    
    
}