#include<stdio.h>

int RevDigit(int *Arr)
{
    static int iDigit = 0;

    if(*Arr != '\0')
    {
        iDigit = *Arr % 10;
        Arr[] = iDigit;
        *Arr = *Arr / 10;

        RevDigit(Arr);
    }

    return Arr;
}
int main()
{
    int iRet = 0;
    int Arr[] = {'\0'};

    printf("Enter a number : \n");
    scanf("%d",Arr);

    iRet = RevDigit(Arr);

    printf("%ls",Arr);

    return 0;
}