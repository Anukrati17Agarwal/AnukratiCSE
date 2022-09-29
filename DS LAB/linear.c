#include<stdio.h>
int linearsearch(int array[],int search);
int main(){
    int array[10],value,item,n;
    for ( int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    int search=9;
    value=linearsearch(array,9);
    printf("%d",value);
    return 0;
}
int linearsearch(int array[],int search)
{
    for(int i=0;i<6;i++)
    {
        int item=array[i];
        if(item==search)
        return i;

    }
}