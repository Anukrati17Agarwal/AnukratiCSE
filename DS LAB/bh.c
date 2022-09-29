// Counting sort in C programming

#include <stdio.h>

void countingSort(int array[], int size)
{
    int output[10];

    // Find the largest element of the array
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }

    // The size of count must be at least (max+1) but
    // we cannot declare it as int count(max+1) in C as
    // it does not support dynamic memory allocation.
    // So, its size is provided statically.
    int count[10];

    // Initialize count array with all zeros.
    for (int i = 0; i <= max; ++i)
    {
        count[i] = 0;
    }

    // Store the count of each element
    for (int i = 0; i < size; i++)
    {
        count[array[i]]++;
    }

    // Store the cummulative count of each array
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }
}
int main()
{
    int i,n,j,k;
    int a[50];
    printf("Enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
}