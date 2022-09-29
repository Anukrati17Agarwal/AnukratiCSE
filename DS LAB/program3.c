#include<stdio.h>
int main()
{
int i,j;
    int a[5]={1,2,4,6,8};
    printf(" the position ");
    scanf("%d",&j);
    
    for(i=j+1;i<5;i++)
    a[i-1]=a[i];
    for(i=0;i<5-1;i++)
    printf("%d",a[i]);
    
    
        return 0;
}