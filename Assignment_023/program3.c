#include<stdio.h>

void Display(char ch)
{
  if((ch >= 'A') && (ch <= 'Z'))
  {
    while(ch != 'a')
    {
      if((ch >= 'A') && (ch <= 'Z'))
      {
         printf("%c\n",ch);
      }
      ch++;
    }
  }

  if((ch >= 'a') && (ch <= 'z'))
  {
    while(ch != 'Z')
    {
      if((ch >= 'a') && (ch <= 'z'))
      {
         printf("%c\n",ch);
      }
      ch--;
    }

  }


   
}
int main()
{
    char cValue = '\0';

    printf("Enter a character :\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}