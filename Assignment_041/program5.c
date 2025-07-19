#include<stdio.h>

void Display(int iNo)
{
    static char ch = 'a';

    if(iNo >= 1)
    {
        printf("%c\n",ch);
        ch++;
        Display(--iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}