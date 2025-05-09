//////////////////////////////////////////////////////////////////////////////////
//
// File Name : Assignment_2
// Description : Program_5
// Author : Omkar Mahadev Bhargude
// Date : 09/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }

    return 0;
}