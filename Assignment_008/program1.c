#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double Area = 0.0f;
    Area = PI * fRadius * fRadius;

    return Area;

}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter the Radius :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is :%f\n",dRet);

    return 0;
}