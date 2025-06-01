#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bFlag = false;
    if((Arr == NULL) && (iSize <= 0 ))
    {
        printf("Invalid input\n");
        return false;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}
int main()
{
    int iLength = 0, iCnt = 0; 
    bool bRet = false;
    int *iPtr = NULL;

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("\nEnter %d elements :\n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\nEnter element %d :",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    bRet = Check(iPtr,iLength);

    if(bRet ==  true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }


    free(iPtr);

    return 0;
}