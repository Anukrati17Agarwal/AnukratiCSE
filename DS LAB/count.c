// #include<stdio.h>
// int count_sort(int a[],int n , int k)
// {
//     int c[20]={0};
//     int b[20];
//     int i,j;
//     for ( i = 0; i < n-1; i++)
//     {
//         c[a[i]]++ ;
//     }
//     for ( i = 1; i<k; i++)
//     {
//      c[i] = c[i] + c[i-1] ;
//     }
//     for ( j = n-1; j>=0 ;j--)
//     {
//         b[c[a[j]]-1] = a[j];
//         c[a[j]] = c[a[j]-1];
//     }

    
#include<stdio.h>
void count_sort(int array[],int size){
    int output[10];
    int max=array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i]>max)
        {
            max = array[i];
        }
        
    }
    
}
  int count[10];
  for (int i = 0; i <= max; i++)
 {
    count[i] =0;
 }
 





























// int main(){
//     int i,j,k,n;
//     int a[50] ;
//     printf("Enter the size of array\n");
//     scanf("%d",&n);
//     printf("Enter the elements of array\n");
//     for ( i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
    


//     return 0;
// }