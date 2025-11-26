#include <stdio.h>

void miniMaxSum(long *n)
{
    int i;
    long min;
    long max;
    long total;
    long minsum;
    long maxsum;
    
    i = 0;
    min = n[0];
    max = n[0];
    total = n[0] + n[1] + n[2] + n[3] + n[4];
    while(i < 5)
    {
        if(n[i] > max)
            max = n[i];
        if(n[i] < min)
            min = n[i];
        i++;
    }
    minsum = total - max;
    maxsum = total - min;
    printf("%ld %ld", minsum, maxsum);
}

int main(void)
{
    long arr[5];
    int i;
    
    i = 0;
    while (i < 5)
    {
        scanf("%ld", &arr[i]);
        i++;
    }
    miniMaxSum(arr);
    return (0);
}
