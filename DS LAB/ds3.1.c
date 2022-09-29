#include<stdio.h>
int main(){
    int i,j,m,n,m2,n2;
    int a[50][50];
    int b[50][50];
    int c[50][50];
    printf("ENTER THE ROWS AND COLUMNS OF ARRAY a\n");
    scanf("%d%d",&m, &n); // SCANF MEIN NO SPACE IS ALLOWED🚫🚫🚫
    printf(" ENTER THE ELEMENTS OF ARRAY a:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j <n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
        printf("ENTER THE ROWS AND COLUMNS OF ARRAY B\n");
    scanf("%d%d",&m2, &n2); // SCANF MEIN NO SPACE IS ALLOWED
    printf(" ENTER THE ELEMENTS OF ARRAY B:\n");
     for ( i = 0; i < m2; i++)
    {
        for ( j = 0; j <n2; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("THE ARRAY A IS:\n");
     for ( i = 0; i < m; i++)
    {
        for ( j = 0; j <n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
        
    }
    printf("THE ARRAY B IS :\n");
     for ( i = 0; i < m2; i++)
    {
        for ( j = 0; j <n2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
        
    }

    
    
    return 0;

}