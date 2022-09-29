// #include<stdio.h>
// int binarysearch(int array[],int search);
// int main(){
//  int array[]={2,3,4,6,7,8,9},val,item,l,h;
//     int search=9;
//     val=binarysearch(array,9);
//     printf("%d",val);
//     return 0;
// }
//  int binarysearch(int array[],int search)
// {
//     int l,h,val,mid,flag ;
//     while (l<=h)
//     {
//         if (val<array[mid])
//         {
//             h = mid-1;
//         }

//         else if (val>array[mid])
//         {
//             l=mid+1;
//         }

//         else if (val == array[mid])
//         {
//             flag =1;
//             break;
//         }
        
        
//     }
    
// }

// Binary Search in C

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 6;
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}