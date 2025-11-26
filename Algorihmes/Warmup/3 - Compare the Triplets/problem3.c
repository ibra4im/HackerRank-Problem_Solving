#include <stdio.h>

void compareTriplets(int a_count, int a[], int b_count, int b[] , int result_count[])
{
    int i = 0;
    while (i < 3)
    {
        if (a[i] > b[i])
        {
            a_count++;
        }
        else if (b[i] > a[i])
        {
            b_count++;
        }
        i++;
    }
    result_count[0] = a_count;
    result_count[1] = b_count;

    printf("%d ",result_count[0]);
    printf("%d",result_count[1]);
}

void add_num(int a[], int b[])
{
    for (int i = 0; i < 3; i++) 
    {
         scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < 3; i++) 
    {
        scanf("%d", &b[i]);
    }
}
int main ()
{
    int a_count = 0 ;
    int b_count = 0 ;
    int b[3] ;
    int a[3] ;
    int result_count[2];
    
    add_num(a,b);
    compareTriplets(a_count, a, b_count, b, result_count);

}