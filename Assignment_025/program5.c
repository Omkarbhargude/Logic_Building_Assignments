#include<stdio.h>

int CountSpace(char *str)
{
    int iCountSpace = 0;
    
    while(*str != 0)
    {
        if(*str == ' ')
        {
            iCountSpace++;
        }
        str++;
    }

    return iCountSpace;
}
int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpace(Arr);

    printf("Number of whitespaces in string are : %d\n",iRet);

    return 0;
}