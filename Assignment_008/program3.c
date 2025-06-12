#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 1000;
    int iAns = iNo * iMeter;

    return iAns;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Kilometer :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Total meter is :%d\n",iRet);

    return 0;
}