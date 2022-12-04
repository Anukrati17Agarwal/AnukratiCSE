#include <stdio.h>
#include <string.h>
struct complex
{
    int real;
    int imaginary;
} c1, c2;
int main()
{
    int sum_real, sum_imaginary;
    printf("ENTER THE REAL AND IMAGINARY PART OF FIRST COMPLEX NUMBER :\n");
    scanf("%d%d", &c1.real, &c1.imaginary);
    printf("ENTER THE REAL AND IMAGINARY PART OF SECOND COMPLEX NUMBER :\n");
    scanf("%d%d", &c2.real, &c2.imaginary);
    sum_real = c1.real+c2.real;
    sum_imaginary = c1.imaginary+c2.imaginary;

    printf("THE SUM OF COMPLEX NUMBERS IS %d+%di ",sum_real,sum_imaginary);
    return 0;
}
