#include<stdio.h>
int ternary_search(int a[],int x, int h , int l){
    int mid1 ,mid2;
    if (l>=h)
    {
        int mid1 = l+(h-l)/3;
        int mid2 = h-(h-l)/3;
        if (x==a[mid1])
        return mid1;
        if (x==a[mid2])
        return mid2;
        else if(x<a[mid1])
        return ternary_search(a,x,mid1-1,l);
        else if(x>a[mid2])
        return ternary_search(a,x,h,mid2+1);
        else if(x)


        
    }
    
}