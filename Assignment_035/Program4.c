#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }

}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);

        first = first->next;
    }

    printf("NULL\n");
}

void DisplayAddition(PNODE first)
{
    int iCnt = 0, iSum = 0, iDigit = 0;

    while(first != NULL)
    {
        iSum = 0;
        while(first->data != 0)
        {
            iDigit = first->data % 10;
            iSum = iSum + iDigit;
            first->data = first->data / 10;
        }

        printf("%d\n",iSum);

        first = first->next;
    }

}

int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,420);
    InsertFirst(&head,320);
    InsertFirst(&head,230);
    InsertFirst(&head,110);


    DisplayAddition(head);
    return 0;
}