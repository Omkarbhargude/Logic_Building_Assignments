#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr);

    printf("Small characters are : %d\n",iRet);
    printf("Small characters are : %d\n",iRet);


    return 0;
}