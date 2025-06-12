#include<stdio.h>
#include<stdlib.h>

void Divisible(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 5 )== 0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}
int main()
{
    int iLength = 0, iCnt = 0;
    int *iPtr = NULL;

    printf("Enter the number of Elements :\n");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("\nEnter %d Elements :\n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\nEnter element %d :",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    Divisible(iPtr,iLength);

    free(iPtr);

    return 0;

}