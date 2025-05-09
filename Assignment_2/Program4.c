//////////////////////////////////////////////////////////////////////////////
//
// File name : Assignment_2
// Description : Program_4 
// Author : Omkar Mahadev Bhargude
// Date : 09/05/2025
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\n",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter first number\n");
    scanf("%d",&iValue);

    printf("Enter second value\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);



    return 0;
}