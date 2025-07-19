#include<stdio.h>


void Display(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d\t * \t",iNo);

        Display(--iNo);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}