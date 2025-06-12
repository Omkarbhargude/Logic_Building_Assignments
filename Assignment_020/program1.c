#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}
int main()
{
    int iLength = 0, iCnt = 0, iValue = 0; 
    bool bRet = false;
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

    bRet = Check(iPtr,iLength,iValue);

    if(bRet == true)
    {
        printf("%d is present in Array\n",iValue);
    }
    else
    {
        printf("%d is not present in Array\n",iValue);
    }
 
    free(iPtr);

    return 0;
}