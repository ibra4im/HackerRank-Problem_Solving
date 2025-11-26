#include <stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);

    int i = 1 ;
    while (i <= n)
    {
        int space = 0;
        while (space < n - i)
        {
            printf(" ");
            space++;
        }
        
        int m = 0 ;

        while (m < i)
        {
            printf("#");
            m++;   
        }

        printf("\n");
        i++;
    }
}