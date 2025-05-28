//Input :- 5
//O/P :- A B C D E

#include<stdio.h>

void DisplayPattern(int iNo)
{
    int i = 0; 
    char ch = '\0';

    for(i = 1,ch = 'A'; i <= iNo; i++,ch++)
    {
        printf("%c\t",ch);
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