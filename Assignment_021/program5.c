#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iDigit = 0, iSum = 0;
   
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       while(Arr[iCnt] != 0)
       {
        iDigit = Arr[iCnt] % 10;
        iSum = iSum + iDigit;
        Arr[iCnt] = Arr[iCnt] / 10;
       }

       printf("%d\n",iSum); 

       //setting isum to 0 after every iteration
       iSum = 0;
    }

}
int main()
{
    int iSize = 0, iCnt = 0, Arr;
    int *iPtr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    iPtr = (int *)malloc(iSize * sizeof(int));

    if(iPtr == NULL)
    {
        printf("unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    DigitsSum(iPtr,iSize);

    free(iPtr);

    return 0;
}