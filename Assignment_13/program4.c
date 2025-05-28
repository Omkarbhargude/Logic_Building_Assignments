//Input :- iRow = 4, iCol = 5
/* O/P :-
          4 4 4 4 4
          3 3 3 3 3
          2 2 2 2 2
          1 1 1 1 1
*/

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
    int i = 0, j= 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",i);
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