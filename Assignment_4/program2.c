#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo / 2) ; iCnt >= 1 ; iCnt--)
    {
        if((iNo % iCnt )== 0)
        {
            printf("%d\n",iCnt);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    FactRev(iValue);



    return 0;
}