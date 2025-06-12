//write a program which accepts number from user and if number is less then 50 print "Small"
//and if number is greater the 50 and less then 100 print "Medium" and if number is greater 
//then 100 print "Large"

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 0)
    {
        printf("Invalid input\n");
    }

    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("Medium\n");
    }
    else if(iNo > 100)
    {
        printf("Large\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    Number(iValue);


    return 0;
}