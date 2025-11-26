#include<stdio.h>

int main()
{

    long long i, sum = 0;
    int size ;
    long  arr[100000] ;
    scanf("%d",&size);
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
          
    //add all elements to the variable sum.
    for(i = 0; i < size; i++)
          sum = sum + arr[i]; // same as sum += arr[i];
    
    //print the result
    printf("%ld\n",sum);
    
    return 0;
}
