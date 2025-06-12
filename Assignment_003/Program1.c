#include<stdio.h>
#include<stdbool.h>

void PrintEven(int iNo)
{
    if(iNo < 0)
    {
        return;
    }

    int iCnt = 0;
    int iSum = 2;

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iSum);
        iSum = iSum + 2;
    }   
}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);


    return 0;
}