#include<stdio.h>
#include<stdlib.h>

int MaximumMinimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0, iMax = 0;

    for(iCnt = 0,iMin = Arr[iCnt]; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        else if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax - iMin;
}
int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *iPtr = NULL;

    printf("Enter number of Elements :\n");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements :\n",iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\nEnter %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = MaximumMinimum(iPtr,iLength);

    printf("The Difference is : %d\n",iRet);

    free(iPtr);

    return 0;
}