/////////////////////////////////////////////////////////////
//
// File name : Assignment1/Program 3
// Description : Program to print 5 to 1 number on screen
// Author : Omkar Mahadev Bhargude
// Date : 08/05/2025
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int iCnt = 0;
    iCnt = 5;
    
    while(iCnt >= 1)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }
}
int main()
{
    Display();



    return 0;
}
