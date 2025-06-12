#include<stdio.h>

double RectArea(float fNo1,float fNo2)
{
    double Area = 0.0f;
    Area = fNo1 * fNo2;

    return Area;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0f;

    printf("Enter width :");
    scanf("%f",&fValue1);

    printf("Enter height :");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of rectangle is :%f\n",dRet);


    return 0;
}