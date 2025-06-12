#include<stdio.h>
#include<stdbool.h>

int FirstChar(char *str, char ch)
{
    int iOucc = 0, iCnt = 0;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
          iOucc = iOucc + iCnt;
          break;
        }
        str++;
        iCnt++;
    }

    return iOucc;

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

    iRet = FirstChar(Arr,cValue);

    printf("%c is present at index : %d\n",cValue,iRet);

}