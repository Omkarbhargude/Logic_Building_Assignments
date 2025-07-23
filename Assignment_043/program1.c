#include<stdio.h>

int CountSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;

        CountSpace(str);
    }

    return iCount;
}
int main()
{
    char Arr[24] = {'\0'};
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpace(Arr);

    printf("Number of white spaces are : %d\n",iRet);


    return 0;
}