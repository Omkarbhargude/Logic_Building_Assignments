// write a program to which acccepts N and print first 5 multiples of N

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iSum = 1;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iSum = iNo * iCnt;
        printf("%d\n",iSum);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}