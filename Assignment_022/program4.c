#include<stdio.h>
#include<stdbool.h>
#define TRUE 0
#define FALSE -1

bool CheckSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = CheckSmall(cValue);

    if(bRet == TRUE)
    {
        printf("%c is Small\n",cValue);
    }
    else
    {
        printf("%c is not Small\n",cValue);
    }


    return 0;
}