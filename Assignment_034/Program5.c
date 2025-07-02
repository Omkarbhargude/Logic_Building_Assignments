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
        first = first -> next;
    }

    printf("NULL \n");
}

int Minimum(PNODE first)
{
    int iMin = first->data;

    while(first != NULL)
    {
        if(first->data < iMin)
        {
            iMin = first->data;
        }

        first = first -> next;
    }

    return iMin;
}
int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,9);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);


    iRet = Minimum(head);

    printf("Smallest element is : %d\n",iRet);



    return 0;


}