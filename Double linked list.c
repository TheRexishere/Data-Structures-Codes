#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *next;
    struct node *pre;
}*start,*newptr,*temp;

struct node* create()
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the number:\n");
    scanf("%d",&ptr->val);
    ptr->next=NULL;
    ptr->pre=NULL;
    return ptr;
}

void insertH(struct node *np)
{
    if(start==NULL) start=np;
    else
    {
        np->next=start;
        start->pre=np;
        start=np;
    }

}

void insertL(struct node *np)
{
    temp=start;
    if(start==NULL) start=np;
    else{
    while(temp->next!=NULL) temp=temp->next;
    np->pre=temp;
    temp->next=np;
    }

}

void displayF()
{
    temp=start;
    printf("\nNULL<===>");
    while(temp!=NULL)
    {
        printf("%d<===>",temp->val);
        temp=temp->next;
    }
    printf("NULL\n");
}

void displayB()
{
    temp=start;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    printf("\nNULL<===>");
    while(temp!=NULL)
    {
        printf("%d<===>",temp->val);
        temp=temp->pre;
    }
    printf("NULL\n");
}

int main()
{
    int ch;
    start=NULL;
    while(1)
    {
        printf("\n\tDoubly Linked List\n");
        printf("\n1)Create a Block");
        printf("\n2)Insert at Head");
        printf("\n3)Insert at Last");
        printf("\n4)Display the List in Forward Direction");
        printf("\n5)Display the List in Backward Direction");
        printf("\n6)Exit");
        printf("\nYour Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:newptr=create();break;
            case 2:insertH(newptr);break;
            case 3:insertL(newptr);break;
            case 4:displayF();break;
            case 5:displayB();break;
            case 6:exit(0);
            default:printf("\nWrong Choice\n");
        }
    }
}
