#include <stdio.h>
int main()
{
    char str[100000];
    scanf("%s",&str);

    long i = 0 ;

    long camel = 1 ;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            camel++;
        }
        i++;
    }

    printf("%ld",camel);
}