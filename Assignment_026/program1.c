#include<stdio.h>
#include<stdbool.h>

//case sensitive program
bool CheckChar(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }

    return bFlag;
}
int main()
{
    char Arr[20] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character that you want to search : ");
    scanf(" %c",&cValue);

    bRet = CheckChar(Arr,cValue);

    if(bRet == true)
    {
        printf("%c is present in string\n",cValue);
    } 
    else
    {
        printf("%c is not present in string\n",cValue);

    }
}