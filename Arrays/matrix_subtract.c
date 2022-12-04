#include <stdio.h>
int main()
{
    int i, j, k;
    int n1, n2, m1, m2;
    int a[100][100];
    int b[100][100];
    int c[100][100];

    printf("ENTER THE NUMBER OF ROWS AND COLUMNS OF MATRIX 1:\n");
    scanf("%d%d", &n1, &m1);
    printf("ENTER THE NUMBER OF ROWS AND COLUMNS OF MATRIX 2:\n");
    scanf("%d%d", &n2, &m2);

    printf("ENTER THE ELEMENTS OF MATRIX 1:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < m1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("ENTER THE ELEMENTS OF MATRIX 2:\n");
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < m2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("THE MATRIX 1 IS:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < m1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("THE MATRIX 2 IS:\n");
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < m2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    if (n1 == n2 && m1 == m2)
    {

        printf("THE SUBTRACTION OF MATRICES IS AS BELOW:\n");
        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < m1; j++)
            {
                c[i][j] = a[i][j] - b[i][j];
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("THE SUBTRACTION OF MATRICES IS NOT POSSIBLE\n");
    }

    return 0;
}