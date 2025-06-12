#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
    int iCnt = 0, iMult = 0;

    for(iCnt = 0, iMult = 1; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0) 
        {
            iMult = Arr[iCnt] * iMult;
        }
    }
    return iMult;
}
int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *iPtr = NULL;

    printf("Enter number of elements :\n");
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
        printf("Enter element %d :",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Product(iPtr,iLength);

    printf("The product  is : %d\n",iRet);

    free(iPtr);

    return 0;
}