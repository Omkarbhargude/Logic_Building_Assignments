//////////////////////////////////////////////////////////////////
//
// File name : Assignment1/Program 5
// Description : To accept no from user and print that no of "*"
// Author : Omkar Mahadev Bhargude
// Date : 08/05/2025
//
//////////////////////////////////////////////////////////////////


#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the value\n");
    scanf("%d",&iValue);

    Accept(iValue);


    return 0;
}
