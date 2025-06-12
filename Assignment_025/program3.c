#include<stdio.h>

void strtoggleX(char *str)
{
    while(*str != 0)
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    char Arr[20] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("Modified string is : %s\n",Arr);

    return 0;
}