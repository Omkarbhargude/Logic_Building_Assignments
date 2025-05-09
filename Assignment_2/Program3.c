//////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name : Assignmen_2
// Description : Program_3
// Author : Omkar Mahadev Bhargude
// Date : 09/05/2025
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("HELLO\n");
    }
    else
    {
        printf("DEMO\n");
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