#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
        iNo = iNo / 10;
    }

}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter digit :");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("It does not contain Zero\n");
    }

    return 0;
}