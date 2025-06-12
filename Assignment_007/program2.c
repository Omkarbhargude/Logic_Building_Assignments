#include<stdio.h>

int DollarToINR(int iNo)
{
    int iConv = 70;
    int iAns = 0;

    iAns = iNo * iConv;

    return iAns;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD :\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n",iRet);

    return 0;
}