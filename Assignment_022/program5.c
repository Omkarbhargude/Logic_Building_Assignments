#include<stdio.h>

void DisplaySchedule(char Div)
{
    if((Div == 'A') || (Div == 'a'))
    {
        printf("Your Exam is at 7 AM\n");
    }
    else if((Div == 'B') || (Div == 'b'))
    {
        printf("Your Exam is at 8:30 AM\n");
    }
    else if((Div == 'C') || (Div == 'c'))
    {
        printf("Your Exam is at 9:20 AM\n");
    }
    else if((Div == 'D') || (Div == 'd'))
    {
        printf("Your Exam is at 10:30 AM\n");
    }
    else 
    {
        printf("Invalid input\n");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter Division :\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;

}