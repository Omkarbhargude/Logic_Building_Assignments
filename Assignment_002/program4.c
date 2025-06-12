#include<stdio.h>

void Display(int iNo, int iNo2)
{
    int iCnt = 0;

    if(iNo2 < 0)
    {
        iNo2 = -iNo2;
    }

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        printf("%d\n",iNo);
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second number : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}