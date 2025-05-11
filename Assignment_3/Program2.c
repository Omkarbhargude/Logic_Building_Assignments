#include<stdio.h>

void PrintFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo; //Updator for negative values
    }

    for(iCnt = 1;iCnt < iNo/2; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
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

    PrintFactor(iValue);


    return 0;
}