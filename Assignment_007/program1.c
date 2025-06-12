#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt =  iCnt = iNo; iCnt--)
    {
      
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}