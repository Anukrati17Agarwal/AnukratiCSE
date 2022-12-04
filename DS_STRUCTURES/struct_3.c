#include <stdio.h>
#include <string.h>
struct height
{
    int feet;
    int inches;
} h1, h2;

int main()
{
    int sum_feet, sum_inches, I;
    printf("ENTER THE HEIGHT 1 IN FEET AND INCHES\n");
    scanf("%d%d", &h1.feet, &h1.inches);
    printf("ENTER THE HEIGHT 2 IN FEET AND INCHES\n");
    scanf("%d%d", &h2.feet, &h2.inches);
    sum_feet = h1.feet + h2.feet;
    sum_inches = h1.inches + h2.inches;
    I = sum_inches;
    if (sum_inches > 12)
    {
        sum_inches = sum_inches % 12;
        sum_feet = sum_feet + I / 12;
    }
    printf("THE ADDITION OF DISTANCE IS: %d feet %d inches\n", sum_feet, sum_inches);

    return 0;
}
