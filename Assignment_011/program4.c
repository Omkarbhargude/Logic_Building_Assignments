//Input :- 5
//O/P :- # 1 * # 2 * # 3 * # 4 * # 5 *

#include<stdio.h>

void DisplayPattern(int iNo)
{
    int i = 0; 

    for(i = 1; i <= iNo; i++)
    {
        printf("#\t%d\t*\t",i);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}