#include<stdio.h>
#include<stdbool.h>

int ReverseX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start <= end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
    char Arr[20] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    ReverseX(Arr);

    printf("Reversed string : %s\n",Arr);

    return 0;
}