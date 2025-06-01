#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *iPtr = NULL;

    iPtr = (int *)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    printf("Enter %d elements :\n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\nEnter element %d :",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = CountEven(iPtr,iLength);

    printf("Number of even elements are : %d\n",iRet);

    free(iPtr);

    return 0;
}