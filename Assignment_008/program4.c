#include<stdio.h>

double FHtoCs(float fTemp)
{
    double dAns = 0.0f;
    dAns = (fTemp - 32) * 5 / 9;
    return dAns;
}

int main()
{
    float fValue = 0.0f;
    double fRet = 0.0f;

    printf("Enter the temperature :");
    scanf("%f",&fValue);

    fRet = FHtoCs(fValue);

    printf("Temperature in celcius is :%f\n",fRet);



    return 0;
}