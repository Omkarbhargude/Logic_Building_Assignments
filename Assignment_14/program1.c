//Input :- iRow = 4, iCol = 4
/* O/P :-
          1 2 3 4
          5 6 7 8
          9 1 2 3
          4 5 6 7
*/

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
    int i = 0, j = 0, k1 = 1, k2 = 1;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(k1 <= 9)
            {
                printf("%d\t",k1);
                k1++;
            }
            else
            { 
                printf("%d\t",k2);
                k2++;
            }
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