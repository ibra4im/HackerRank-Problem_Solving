// still not workinge

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int  ft_strlen(char *s)
{
    int i = 0 ;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}
void ft_swap(char **a,char **b)
{
    char *tmp = *a ;
    *a = *b ;
    *b = tmp ;
}
void BigSort(char *s[],long long size)
{
    int i = 0 ;
    while (i < size - 1)
    {
        int j = 0 ;
        while (j < size - 1)
        {
            int len1 = ft_strlen(s[j]) ;
            int len2 = ft_strlen(s[j + 1]) ;    

            if (len1 > len2 || (len1 == len2 && strcmp(s[j], s[j + 1]) > 0))
            {
                ft_swap(&s[j],&s[j +1]);
            }
            j++;
        }
        i++;
    }
}
void printstr(char *s[] ,long long size)
{
    int i = 0 ;
    while ( i < size)
    {
        printf("%s\n",s[i]);
        i++;
    }
}
int main()
{
    long long  size ;
    scanf("%lld",&size);
    char **s = malloc(size * sizeof(char *));
    int i = 0 ;
    while (i < size)
    {
        s[i] = malloc(100001);
        scanf("%s",s[i]);
        i++;
    }
    BigSort(s,size);
    printstr(s,size);
}