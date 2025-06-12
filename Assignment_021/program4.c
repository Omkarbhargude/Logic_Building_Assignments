#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCnt = 0, iDigit = 0,iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        while(Arr[iCnt] )
        {
            iDigit =  Arr[iCnt] % 10;
            Arr[iCnt] = Arr[iCnt] / 10;
            iCount++;
        }

            printf("%d\n",Arr[iCnt]);
    }

}
int main()
{
    int iLength = 0, iCnt = 0;
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

    Digits(iPtr,iLength);

    free(iPtr);

    return 0;
}