//////////////////////////////////////////////////////////
//
// File name : Assignment_3/Program_2
// Description : Accept no from user and print that no of "*"
// Author : Omkar Mahadev Bhargude
// Date : 09/05/2025
//
////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while(iNo >= iCnt )
    {
        printf("*\n");
        iNo--;
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