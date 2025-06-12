#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    bool bFlag = false;
    
    if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
    {
        bFlag = true;
    }

    return bFlag;
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a character :\n");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == true)
    {
        printf("%c is Alphabet\n",cValue);
    }
    else
    {
        printf("%c is not Alphabet\n",cValue);
    }


    return 0;
}