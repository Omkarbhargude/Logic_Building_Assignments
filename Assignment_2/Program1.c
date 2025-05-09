///////////////////////////////////////////////////////////////
//
// File name : Assignment_2/Program_1
// Description : Accept no from user and print that no of "*"
// Author : Omkar Mahadev Bhargude
// Date : 09/05/2025
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("*\n");
        iCnt++;
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the value\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}
