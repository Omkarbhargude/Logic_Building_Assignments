//Input :- iRow = 4, iCol = 4
/* O/P :- 
         A B C D
         A B C D
         A B C D
         A B C D
*/

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
    int i = 0, j= 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,ch = 'A'; j <= iCol; j++,ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows and Columns :\n");
    scanf("%d %d",&iValue1,&iValue2);

    DisplayPattern(iValue1,iValue2);

    return 0;
}