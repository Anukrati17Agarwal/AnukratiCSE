#include <stdio.h>
#include <string.h>
struct height
{
    int feet;
    int inches;
} h1, h2;

void conversion(struct height g1, struct height g2)
{
    int sum_feet, sum_inches, I;
    sum_feet = g1.feet + g2.feet;
    sum_inches = g1.inches + g2.inches;
    I = sum_inches;
    if (sum_inches > 12)
    {
        sum_inches = sum_inches % 12;
        sum_feet = sum_feet + I / 12;
    }
    printf("THE ADDITION OF DISTANCE IS: %d feet %d inches\n", sum_feet, sum_inches);
}

void main()
{
    
    printf("ENTER THE HEIGHT 1 IN FEET AND INCHES\n");
    scanf("%d%d", &h1.feet, &h1.inches);
    printf("ENTER THE HEIGHT 2 IN FEET AND INCHES\n");
    scanf("%d%d", &h2.feet, &h2.inches);
    conversion(h1,h2);
}
