#include<stdio.h>

void Display(int iNo)
{
    if(iNo >= 1)
    {
        printf("*\n");
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