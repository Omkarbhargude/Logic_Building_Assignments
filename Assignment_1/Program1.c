////////////////////////////////////////////////////////////////
//
// File name: Assignment1.c
// Description: To perform devision of two number
// Author : Omkar Mahadev Bhargude
// Date : 08/05/2025
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1/iNo2;

    return iAns;
}
int main()
{
    int iValue1 = 15; int iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("The Division is : %d\n",iRet);


    return 0;
}
