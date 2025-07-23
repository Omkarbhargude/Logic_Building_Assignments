#include<stdio.h>

int Maximum(int iNo)
{
    static int iDigit = 0;
    static int iMax = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }

        iNo = iNo / 10;

        Maximum(iNo);
    }

    return iMax;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = Maximum(iValue);

    printf("%d\n",iRet);


    return 0;
}