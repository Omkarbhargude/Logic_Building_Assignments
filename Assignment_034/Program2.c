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

int SearchLastOcc(PNODE first, int iNo)
{
    int iOcc = 0, iCnt = 1;

    while(first != NULL)
    {
        if(first -> data == iNo)
        {
            iOcc = iCnt;
        }

        first = first->next;
        iCnt++;

    }

    return iOcc;

}
int main()
{
    int iRet = 0, iValue = 0;
    PNODE head = NULL;

    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);


    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue);

    iRet = SearchLastOcc(head,iValue);

    printf("Last occurence of element found at position : %d\n",iRet);
    
    Display(head);


    return 0;


}