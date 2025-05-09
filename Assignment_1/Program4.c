///////////////////////////////////////////////////////////
//
// File name : Assignment1/Program 4
// Description : To check is number is divisible by 5
// Author : Omkar Mahadev Bhargude
// Date : 08/05/2025
////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the value\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Cannot Divisible by 5\n");
    }


    return 0;
}
