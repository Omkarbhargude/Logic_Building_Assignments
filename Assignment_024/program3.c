#include<stdio.h>

int CheckDiff(char *str)
{
    int iCapCount = 0, iSmallCount = 0;



    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCapCount++;
        }
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iSmallCount++;
        }
        str++;
    }
    return iCapCount - iSmallCount;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    iRet = CheckDiff(Arr);

    printf("Difference is : %d\n",iRet);


    return 0;
}