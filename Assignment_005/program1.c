//write a program which accepts number from user and print that number of $ and * on screen

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;  //updater
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("enter the number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);


    return 0;
}