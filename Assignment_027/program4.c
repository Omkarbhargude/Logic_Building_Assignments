#include<stdio.h>

void StrCpySmall(char *str, char *dest)
{
    if(str == NULL)
    {
        return;
    }

    while(*str != 0)
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    StrCpySmall(Arr,Brr);

    printf("%s\n",Brr);

    return 0;
}