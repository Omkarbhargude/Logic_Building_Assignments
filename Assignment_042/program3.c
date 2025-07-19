#include<stdio.h>


int Strlen(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;

        Strlen(str);
    }

    return iCount;

}
int main()
{
    int iRet = 0;
    char Arr[20] = {'\0'};

    printf("Enter a string : \n");
    scanf("%s",Arr);

    iRet = Strlen(Arr);

    printf("Number of character in string are : %d\n",iRet);


    return 0;
}