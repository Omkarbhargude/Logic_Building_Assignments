#include<stdio.h>
#include<stdbool.h>

int CharCount(char *str, char ch)
{
    int iCharCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCharCount++;
        }
        str++;
    }

    return iCharCount;

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

    iRet = CharCount(Arr,cValue);

    printf("%c is present %d times in string\n",cValue,iRet)

}