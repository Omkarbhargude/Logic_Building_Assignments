#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    printf("-----------------ASCII TABLE----------------\n\n");

    // In ASCII table from 0 to 31 are non printable characters
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        //the above ascii values are printable 
        if((iCnt >= 32) && (iCnt <= 126))
        {
            printf("Symbol : %c, \t  Decimal : %d,  \t Octal : %o, \t Hexadecimal : %x \n", iCnt, iCnt,iCnt,iCnt);
        }
    }

}
int main()
{
    DisplayASCII();
    
    return 0;
}