#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iAns = 0;
    int iSum1 = 1, iSum2 = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum1 = iSum1 * iCnt;
        }
        else
        {
            iSum2 = iSum2 * iCnt;
        }
        iAns = iSum1 - iSum2;
    }
    return iAns;
}

int main()
{ 
    int iValue = 0, iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is :%d\n",iRet);



    return 0;
}