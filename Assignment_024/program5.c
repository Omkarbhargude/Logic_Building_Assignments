#include<stdio.h>

void Reverse(char *str)
{
    int iCount = 0;
    char *start = NULL;

    start = str;

    while(*str!= '\0')
    {
        str++;
    }

    str--;

    while(str >= start)
    {
        printf("%c",*str);
        str--;
    }
    printf("\n");

}
int main()
{
    char Arr[20];

    printf("Enter String :\n");
    scanf("%[^'\n]s",Arr);

    Reverse(Arr);
    
    return 0;
}