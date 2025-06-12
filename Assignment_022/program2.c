#include<stdio.h>
#include<stdbool.h>
#define TRUE 0
#define FALSE -1

bool CheckCapital(char ch)
{
    
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf("%c is Capital\n",cValue);
    }
    else
    {
        printf("%c is not Capital\n",cValue);
    }


    return 0;
}