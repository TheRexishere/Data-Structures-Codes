#include<stdio.h>
#include<stdlib.h>

struct node
{
int num;
struct node *next;
}*start,*last,*newptr,*temp;

struct node* create()
{
struct node *ptr;
ptr=(struct node*)malloc(sizeof(struct node));
printf("Enter the number\n");
scanf("%d",&ptr->num);
ptr->next=NULL;
return ptr;
}

void insertT(struct node *np)
{
if(start==NULL)
{
start=np;
last=np;
}
else
{
last->next=np;
last=np;
}
}

void insertH(struct node *np)
{
if(start==NULL)
{
start=np;
last=np;
}
else
np->next=start;
start=np;
}

void deleteH()
{
    if(start==NULL)
    {
        printf("\nList is Empty\n");
    }
    else
    {
        start=start->next;
    }
}

void deleteT()
{
    if(start==NULL)
    {
        printf("\nList is Empty\n");
    }
    else
    {
        temp=start;
        while(temp->next!=last)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        last=temp;
    }
}

void display()
{
struct node *d;
d=start;
while(d!=NULL)
{
printf("%d--->",d->num);
d=d->next;
}
}

int main()
{
    int ch;
    start=NULL;
    while(1)
    {
        printf("\n****Linked List****\n");
        printf("1)Create a BLOCK\n");
        printf("2)Insert at HEAD\n");
        printf("3)Insert at TAIL\n");
        printf("4)Delete at HEAD\n");
        printf("5)Delete at TAIL\n");
        printf("6)Display\n");
        printf("7)Exit\n");
        printf("Your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
           case 1:newptr=create();break;
           case 2:insertH(newptr);break;
           case 3:insertT(newptr);break;
           case 4:deleteH();break;
           case 5:deleteT();break;
           case 6:display();break;
           case 7:exit(0);break;
           default :printf("Invalid Choice");
        }

    }
    return 0;
}
