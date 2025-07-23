#include<stdio.h>

int CountSmall(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;

        CountSmall(str);
    }

    return iCount;
}
int main()
{
    char Arr[24] = {'\0'};
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("Number of small characters are : %d\n",iRet);


    return 0;
}