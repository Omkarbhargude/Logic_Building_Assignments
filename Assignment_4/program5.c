#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iNum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        else if((iNo % iCnt) != 0)
        {
            iNum = iNum + iCnt;
        }
    }

    return iSum - iNum;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d\n",iRet);



    return 0;
}