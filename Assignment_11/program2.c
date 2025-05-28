//Input :- 5 
// O/P :- 5 # 4 # 3 # 2 # 1 #

#include<stdio.h>

void DisplayPattern(int iNo)
{
    int i = 0; 

    for(i = iNo; i >= 1; i--)
    {
        printf("%d\t#\t",i);
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