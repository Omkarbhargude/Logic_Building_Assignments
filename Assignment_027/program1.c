#include<stdio.h>

void StrCpy(char *str, char *dest)
{
    if(str == NULL)
    {
        return;
    }

    while(*str != '\0')
    {
        *dest = *str;
        str++;
        dest++;
    }
    printf("\n");

}
int main()
{
    char Arr[30] = {'\0'};
    char Brr[30] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    StrCpy(Arr,Brr);

    printf("Other string : %s\n",Brr);

    return 0;
}