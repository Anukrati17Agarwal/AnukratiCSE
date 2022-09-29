#include <stdio.h>
int main()
{
    int i, j, k=0, n, m, r,max;
    int a[100];
    int b[100];
    int DAT[10]={0};
    printf("ENTER THE SIZE OF ARRAY a:\n");
    scanf("%d", &n);

    printf("ENTER THE ELEMENTS OF ARRAY a:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // printf("ENTER THE SIZE OF ARRAY b:\n ");
    // scanf("%d", &m);
    // printf("ENTER THE ELEMENTS OF ARRAY a:\n");
    // for (j = 0; j < m; j++)
    // {
    //     scanf("%d", &b[j]);
    // }
    max=a[i];
    for ( i = 0; i < n-1; i++)
    {
        if (a[i]<a[i+1])
        {
            max=a[i];
        }
        
        
        
    }
    
    
    
    

    return 0;
}