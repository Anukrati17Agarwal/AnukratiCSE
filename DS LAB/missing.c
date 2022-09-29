#include <stdio.h>
int main()
{
    // int i, j, k=0, n, m, r;
    // int a[100];
    // int DAT[10] ={0} ;
    // printf("ENTER THE SIZE OF ARRAY a:\n");
    // scanf("%d", &n);

    // printf("ENTER THE ELEMENTS OF ARRAY a:\n");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
 int i,j,k,n,m;
    int A[] = {1, 4, 5, 6, 8, 3, 2, 1, 3, 3, 9, 7, 8, 1, 1, 1, 9, 2};
    int MAX = A[0];
    int DAT[10] = {0};
    for ( i = 1; i <= 19; i++)
    {
        if (A[i]>MAX)
        {
            MAX=A[i];
        }
        
    }
    
    for (i = 0; i < 19; i++)
    {
        DAT[A[i]]++;
    }
    for (i = 1; i < 9; i++)
    {
        //if (DAT[i] == 1)
        if(DAT[i]>1)
        {
            printf("%d", i);
        }
    }

    return 0;
}

//--- REPEATED/NONREPEATED
//--- MISSING NUMBER
//---CHAR BY CHAR COUNT
//---ANAGRAM