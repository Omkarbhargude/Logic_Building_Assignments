#include<stdio.h>

void StrNCpy(char *str, char *dest, int iCnt)
{
    if(str == NULL)
    {
        return;
    }
    while((*str != 0) && (iCnt != 0))
    {
        *dest = *str;
        str++;
        dest++;
        iCnt--;
    }
    printf("\n");
}
int main()
{
    char Arr[30] = {'\0'};
    char Brr[30] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    StrNCpy(Arr,Brr,10);

    printf("%s\n",Brr);

    return 0;
}