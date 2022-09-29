#include <stdio.h>
int main()
{
    //******************THIS CODE IS FOR SORTED ARRAY ONLY**************************
    int i, j, k=0, n, m, r;
    int a[10];
    int b[10];
    int c[20];
    printf("ENTER THE SIZE OF ARRAY a:\n");
    scanf("%d", &n);

    printf("ENTER THE ELEMENTS OF ARRAY a:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("ENTER THE SIZE OF ARRAY b:\n ");
    scanf("%d", &m);
    printf("ENTER THE ELEMENTS OF ARRAY a:\n");
    for (j = 0; j < m; j++)
    {
        scanf("%d", &b[j]);
    }

    i=0;
    j=0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }

        else if (b[j] < a[i])
        {
            c[k] = b[j];
            j++;
            k++;
        }

        else
        {
            c[k] = a[i];
            i++;
            j++;
            k++;
        }
    }

    while (i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("THE UNION OF ARRAY IS:\n");

    for (r = 0; r < k; r++)
    {
        printf("  %d  ", c[r]);
    }

    return 0;
}