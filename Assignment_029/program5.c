#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


#define BUFFER_SIZE 1024

void Display(char FNname[], int iNo)
{
    //file discriptor
    int fd = 0;

    //local variables to read and perform 
    int iRet = 0;

    //Buffer to read the data from file
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FNname, O_RDONLY);  //opened in readonly mode

    if(fd < 0)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("File opened succesfully\n");

        iRet = read(fd,Buffer,iNo);

        printf("%s",Buffer);

        close(fd);
    }

}
int main()
{
    int iRet = 0, iValue = 0;
    char Fname[20] = {'\0'};

    printf("Enter the file name : \n");
    scanf("%s",Fname);

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(Fname,iValue);


    return 0;
}