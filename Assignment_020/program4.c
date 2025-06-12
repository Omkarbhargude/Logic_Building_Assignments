#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int Arr[],int iSize, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}
int main()
{
    int iLength = 0, iCnt = 0, iValue1 = 0, iValue2 = 0; 
    int iRet = 0;
    int *iPtr = NULL;

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    printf("\nEnter the Starting point :\n");
    scanf("%d",&iValue1);

    printf("\nEnter the Ending point :\n");
    scanf("%d",&iValue2);


    iPtr = (int *)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("\nEnter %d elements :\n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\nEnter element %d :  ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

     DisplayRange(iPtr,iLength,iValue1,iValue2);

    free(iPtr);

    return 0;
}