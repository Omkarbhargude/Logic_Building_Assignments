#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    if(iCnt == iSize)
    {
        return -1;
    }
}
int main()
{
    int iLength = 0, iCnt = 0, iValue = 0; 
    int iRet = 0;
    int *iPtr = NULL;

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    printf("\nEnter the value for frequency :\n");
    scanf("%d",&iValue);

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

    iRet = FirstOcc(iPtr,iLength,iValue);

    if(iRet == -1)
    {
        printf("There is no such number array\n");
    }
    else
    {
        printf("First Occurence of %d is at index : %d\n",iValue,iRet);
    }
 
    free(iPtr);

    return 0;
}