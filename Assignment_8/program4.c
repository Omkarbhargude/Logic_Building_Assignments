//write a program which accepts number from user and print its table

#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    if(iNo < 0)
    {
        iNo = -iNo; //updater
    }

    for(iCnt = 1;iCnt <= 10;iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\n",iMult);
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    DisplayTable(iValue);


    return 0;
}