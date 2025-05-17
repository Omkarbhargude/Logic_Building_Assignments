#include<stdio.h>

int CountRange(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit >= 3) && (iDigit <= 7))
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Count of Range in between 3 & 7 are :%d\n",iRet);



    return 0;
}