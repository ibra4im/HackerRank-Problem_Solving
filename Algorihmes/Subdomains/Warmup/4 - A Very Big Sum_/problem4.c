#include <stdio.h>
int aVeryBigSum(long n , long arr[])
{
    int  i = 0 ;
    long sum  = 0;
    while (n > i)
    {
        sum += arr[i] ;     
        i++;
   
    } 
    printf("%ld",sum);
    return sum ;
}
int main()
{ 
    long n  ;
    scanf("%ld",&n);
    long  arr[n] ;
   
    int i = 0 ;
    while ( i < n)
    {
        scanf("%ld",&arr[i]);
        i++;
    }
    aVeryBigSum(n, arr);
}