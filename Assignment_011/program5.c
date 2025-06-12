//Input :- 8
// O/P :-  2 4 6 8 10 12 14 16

#include<stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0; int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + 2;
        printf("%d\n",iSum);
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}