#include<stdio.h>

void StrCpyCap(char *str, char *dest)
{
    if(str == NULL)
    {
        return;
    }

    while(*str != 0)
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *dest = *str;
            dest++;
        }
        str++;
    }
    printf("\n");

}
int main()
{
    char Arr[30] = {'\0'};
    char Brr[30] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    StrCpyCap(Arr,Brr);

    printf("%s\n",Brr);

    return 0;
}