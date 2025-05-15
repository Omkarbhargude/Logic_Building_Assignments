//Accept single  didgit number and print it into word

#include<stdio.h>

void DisplayWord(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    switch(iNo)
    {
        case 1:
            printf("ONE\n");
            break;
        case 2:
            printf("TWO\n");
            break;
        case 3:
            printf("THREE\n");
            break;
        case 4:
            printf("FOUR\n");
            break;
        case 5:
            printf("FIVE\n");
            break;
        case 6:
            printf("SIX\n");
            break;
        case 7:
            printf("SEVEN\n");
            break;
        case 8:
            printf("EIGHT\n");
            break;
        case 9:
            printf("NINE\n");
            break;        
        default:
            printf("Invaid input\n");
    }


}

int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    DisplayWord(iValue);

    return 0;
}