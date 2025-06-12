#include<stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue | 'a' )
    {
        printf("%c",CValue);
    }
    else if(CValue | 'Z')
    {
        printf("%c",CValue);
    }
}
int main()
{
    char cValue ;

    printf("Enter the value\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);



    return 0;
}