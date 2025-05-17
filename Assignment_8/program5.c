//write a program which accepts number from user and display its table is reverse order

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10;iCnt >= 1;iCnt--)
    {
        iMult = iNo * iCnt;
        printf("%d\n",iMult);
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