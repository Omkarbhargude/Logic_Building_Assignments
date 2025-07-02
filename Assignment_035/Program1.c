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

void DisplayPerfect(PNODE first)
{
    int iCnt = 0, iSum = 0;

    while(first != NULL)
    {
        for(iCnt = 1,iSum = 0; iCnt <= (first->data / 2) ; iCnt++)
        {
            if((first->data % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == first->data)
        {
            printf("%d\n",iSum);
        }

        first = first->next;

    }
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,89);
    InsertFirst(&head,6);
    InsertFirst(&head,41);
    InsertFirst(&head,17);
    InsertFirst(&head,28);
    InsertFirst(&head,11);

    DisplayPerfect(head);

    return 0;
}