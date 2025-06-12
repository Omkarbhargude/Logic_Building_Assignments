//Input :- iRow = 4, iCol = 4
/* O/P :-
          2 4 6 8 10
          1 3 5 7 9
          2 4 6 8 10
          1 3 5 7 9
*/

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
    int i = 0, j = 0, k = 0;
    
    for(i = iRow; i >= 1; i--)
    {
        for(j = 1, k = j ; j <= iCol; j++,k += 2)
        {
            if((i % 2 == 0) && (k % 2 == 0))
            {
                printf("%d\t",k);
            }
            else
            {
                printf("%d\t",k);

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