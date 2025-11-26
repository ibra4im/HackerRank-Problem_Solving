#include <stdio.h>
int main()
{
    char s[10] ;
    scanf("%s",s);

    int hour_type ;
    int hour ;

    hour = (s[0] - '0') * 10 + s[1] - '0' ;

    if (s[8] == 'A')
    {
        hour_type = 3 ;
    }
    else if (s[8] == 'P')
    {
        hour_type = 6 ;
    }

    if (hour_type == 3) // AM
    {
        if (hour == 12)
        {
            hour = 0;
        }
            
    }

    else if (hour_type == 6) // pm
    {
        if (hour != 12)
        hour += 12 ;
    } 

    s[8] = '\0' ;

    s[0] = (hour / 10) + '0' ;
    s[1] = (hour % 10) + '0' ;

    printf("%s",s);
}