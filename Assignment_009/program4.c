#include<stdio.h>


int CountFrequency(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
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

    printf("Enter digit :");
    scanf("%d",&iValue);

    iRet = CountFrequency(iValue);

    printf("%d\n",iRet);

    return 0;
}