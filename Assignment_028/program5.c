#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
int main()
{
    int fd = 0, iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};
    char Buffer2[BUFFER_SIZE] = {'\0'};

    printf("Enter the file you want read : \n");
    scanf("%s",Fname);

    printf("Enter string to want to write :\n");
    scanf("%s",Buffer2);

    fd = open(Fname, O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }
    else
    {
        iRet = write(fd,Buffer2,strlen(Buffer2));

        printf("%d new characters gets written in file\nn",iRet);

        close(fd);

    }

    return 0;
}