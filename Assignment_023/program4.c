#include<stdio.h>
#include<stdbool.h>


bool Display(char ch)
{
  bool bFlag = true;

    if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a')  &&  (ch <= 'z') || (ch >= '0') && (ch <= '9'))
    {
      bFlag = false;
    }

    return bFlag;
}
int main()
{
    char cValue = '\0';
    bool bRet = false;
    printf("Enter a character :\n");
    scanf("%c",&cValue);

    bRet = Display(cValue);

    if(bRet == true)
    {
      printf("it is special character\n");
    }
    else
    {
       printf("it not special character\n");
    }

    return 0;
}