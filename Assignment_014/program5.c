//Input :- iRow = 4, iCol = 4
/* O/P :-
         1 2 3 4
         2 3 4 5
         3 4 5 6
         4 5 6 7

*/

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    int k = 0; 
       
    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol,k = i; j >= 1; j--,k++)
        {
            if(i <= j)
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