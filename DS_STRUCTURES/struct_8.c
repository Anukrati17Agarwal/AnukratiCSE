//-----  Write a program to add, subtract and multiply two complex numbers using structures to function------

#include <stdio.h>
struct complex
{
    int real_part;
    int imag_part;
} num1, num2;

void main()
{
    int sumI, sumR, diffR, diffI, add, subtract, multiply1 ,multiply2;
    printf("ENTER THE REAL PART OF 1st COMPLEX NUMBER:\n");
    scanf("%d", &num1.real_part);
    printf("ENTER THE IMAGINARY PART OF 1st COMPLEX NUMBER:\n");
    scanf("%d", &num1.imag_part);
    printf("ENTER THE REAL PART OF 2nd COMPLEX NUMBER:\n");
    scanf("%d", &num2.real_part);
    printf("ENTER THE IMAGINARY PART OF 2nd COMPLEX NUMBER:\n");
    scanf("%d", &num2.imag_part);
    sumR = num1.real_part+num2.real_part;
    sumI = num1.imag_part+num2.imag_part;
    diffR = num1.real_part - num2.real_part;
    diffI = num1.imag_part - num2.imag_part;
    printf("THE ADDITION OF COMPLEX NUMBERS IS:-- %d+%di\n",sumR,sumI);
    printf("THE SUBTRACTION OF COMPLEX NUMBERS IS:-- %d+%di\n",diffR,diffI);
    multiply1 = ((num1.real_part*num2.real_part) - (num1.imag_part*num2.imag_part));
    multiply2 = ((num1.real_part*num2.imag_part)+(num1.imag_part*num2.real_part));
    printf("THE MULTIPLICATION OF COMPLEX NUMBERS IS:--%d+%di",multiply1,multiply2);
}
