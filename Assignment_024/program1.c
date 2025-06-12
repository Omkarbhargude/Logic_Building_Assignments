#include<stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("Capital characters are : %d\n",iRet);


    return 0;
}