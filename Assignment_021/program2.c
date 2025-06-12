#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0;

    for(iCnt = 0,iMin = Arr[iCnt]; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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

    iRet = Minimum(iPtr,iLength);

    printf("The Smallest element from array is : %d\n",iRet);

    free(iPtr);

    return 0;
}