#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isValidForAtoi(char str[])
{
    int i = 0;
    if(str[i] == '\0')
        return 0;
    if(str[i] == '+' || str[i] == '-')
        i++;
    while(str[i] == '0')
        i++;
    if(str[i] == '\0')
        return 1;
    while(str[i] != '\0')
    {
        if(!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}

int main()
{
    char str[100];
    printf("enter the string:\n");
    scanf("%s", str);
    if(isValidForAtoi(str))
        printf("%d", atoi(str));
    else
        printf("Invalid input");
    return 0;
}
