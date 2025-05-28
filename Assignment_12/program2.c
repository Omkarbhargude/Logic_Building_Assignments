//Input : Row = 4, Col = 3
/*Output :-
           1 2 3
           1 2 3
           1 2 3
           1 2 3
*/

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++) //outer loop 
    {
        for(j = 1; j <= iCol; j++) // inner loop
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
int main()
{
   int iValue1 = 0;
   int iValue2 = 0;

   printf("Enter Rows :\n");
   scanf("%d",&iValue1);

   printf("Enter Columns :\n");
   scanf("%d",&iValue2);

   DisplayPattern(iValue1,iValue2);

   return 0;
}