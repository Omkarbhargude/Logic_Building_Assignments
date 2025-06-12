#include<stdio.h>
#include<stdbool.h>


bool CheckEvenOdd(int iNo)
{
    bool bFlag = false;

    if((iNo % 2) == 0)
    {
        bFlag = true;
    }

    return bFlag;
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }

    return 0;
}