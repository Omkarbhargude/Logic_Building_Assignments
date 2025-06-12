#include<stdio.h>
#include<stdlib.h>

int Differece(int Arr[], int iSize)
{
    int iSum1 = 0, iSum2 = 0;
    int iCnt = 0, iAns = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
        else
        {
            iSum2 = iSum2 + Arr[iCnt];
        }
    }
    iAns = iSum1 - iSum2;

    return iAns;
}
int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *iPtr = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate memory\n");
    }

    printf("Enter %d elements :\n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\nEnter element %d :",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Differece(iPtr,iLength);

    printf("Result is :%d\n",iRet);

    free(iPtr); //IMP Step

    return 0;

}