#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
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

    iRet = Maximum(iPtr,iLength);

    printf("The Largest element from array is : %d\n",iRet);

    free(iPtr);

    return 0;
}