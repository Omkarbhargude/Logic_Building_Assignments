#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


#define BUFFER_SIZE 1024

int CountSmall(char FNname[])
{
    //file discriptor
    int fd = 0;

    //local variables to read and perform 
    int iRet = 0, iCnt = 0, iCountSmall = 0;

    //Buffer to read the data from file
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FNname, O_RDONLY);  //opened in readonly mode

    if(fd < 0)
    {
        printf("Unable to open file \n");
        return -1;
    }
    else
    {
        printf("File opened succesfully\n");

        //Buffer is array of characters 
        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if((Buffer[iCnt] >= 'a') && (Buffer[iCnt] <= 'z'))
                {
                    iCountSmall++;
                }
            }

            // this function will clear the buffer till \0
            memset(Buffer,'\0',BUFFER_SIZE);
        }

        close(fd);
    }

    return iCountSmall;
}
int main()
{
    int iRet = 0;
    char Fname[20] = {'\0'};

    printf("Enter the file name : \n");
    scanf("%s",Fname);

    iRet = CountSmall(Fname);

    printf("Number of Small characters in file are : %d\n",iRet);

    return 0;
}