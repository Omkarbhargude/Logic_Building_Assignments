#include<stdio.h>
#include<stdbool.h>

int LastChar(char *str, char ch)
{
    int iOucc = 0, iCnt = 0;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
          iOucc = iOucc + iCnt;
        }
        str++;
        iCnt++;
    }
    if(iOucc >= 0)
    {
        return iOucc;
    }
    else
    {
        return -1;
    }

}
int main()
{
    char Arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character that you want to search : ");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr,cValue);

    if(iRet == -1)
    {
        printf("The character is not present in string\n");
    }
    else
    {
        printf("%c is present at : %d\n",cValue,iRet);
    }

}