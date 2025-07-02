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

int Addition(PNODE first)
{
    int iCnt = 0, iSum = 0;

    while(first != NULL)
    {
        if((first->data % 2) == 0)
        {
            iSum = iSum + first->data;
        }
        first = first->next;
    }

    return iSum;
}

int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,41);
    InsertFirst(&head,32);
    InsertFirst(&head,20);
    InsertFirst(&head,11);

    Display(head);

    iRet = Addition(head);

    printf("Addition of even elements are : %d\n",iRet);

    return 0;
}