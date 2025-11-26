#include <stdio.h>
void rev_arr(int arr[],int size)
{
    int first = 0 ;
    int last = size - 1 ;
    int tmp ;
         while (first < last)
        {
            tmp = arr[first] ;
            arr[first] = arr[last] ;
            arr[last] = tmp ;
            first++;
            last--;
        }
} 
void printarr(int arr[], int size)
{
    int i = 0 ;
    while (i < size)
    {
        printf("%d ",arr[i]);
        i++;
    }
}  
int main()
{
    int size ;
    scanf("%d",&size) ;
    int i = 0 ;
    int arr[size] ;
    while (i < size)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    rev_arr(arr,size);
    printarr(arr,size);
}