#include<stdio.h>
#include<stdbool.h>
#define TRUE 0
#define FALSE -1
bool ChkDivisible(int iNo)
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
    bool bRet = false;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    bRet = ChkDivisible(iValue);

    if(bRet == true)
    {
        printf("It is divisible 5\n");
    }
    else
    {
         printf("It is not divisible 5\n");
    }

    return 0;
}