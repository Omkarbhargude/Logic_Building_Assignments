#include<stdio.h>
#include<stdbool.h>
#define TRUE 0
#define FALSE -1

bool CheckDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a character :\n");
    scanf("%c",&cValue);

    bRet = CheckDigit(cValue);

    if(bRet == TRUE)
    {
        printf("%c is a Digit\n",cValue);
    }
    else
    {
        printf("%c is not Digit\n",cValue);
    }


    return 0;
}