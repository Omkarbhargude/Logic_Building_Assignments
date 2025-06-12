#include<stdio.h>

double SquareMeter(int iNo)
{
    double dMeter = 0.0929f;
    double dAns = iNo * dMeter;
    return dAns;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0f;

    printf("Enter the area :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The square meter is :%f\n",dRet);


    return 0;
}