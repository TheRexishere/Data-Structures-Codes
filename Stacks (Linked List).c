#include<stdio.h>
#include<stdlib.h>

int n,size=0;

struct stack
{
int num;
struct node *next;
}*stptr,*d,*temp;

void push()
{
    if(size==n)
    {
        printf("Stack is Full!!\n");
    }
    else
    {
        struct stack *ptr ;
        ptr=(struct stack *)malloc(sizeof(struct stack));
        printf("Enter value :");
        scanf("%d",&ptr->num);
        ptr->next=stptr;
        stptr=ptr;
        size++;
    }
    
}

void pop()
{
    if(size==0)
    {
        printf("Stack is Empty!!\n");
    }
    else
    {
        temp=stptr;
        stptr=stptr->next;
        free(temp);
        size--;
    }
}

void peek()
{
    if(size==0)
    {
        printf("Stack is Empty!!\n");
    }
    else
    {
        printf("Last element is %d\n",stptr->num);
    }
}

int main()
{
int ch;
printf("Enter the size of stack:");
scanf("%d",&n);
stptr=NULL;

// Interface //
while(1)
{
    printf("*****Stack*****\n");
    printf("Operations:\n");
    printf("1.)Push\n2.)Pop\n3.)Peek\n4.)Exit\n");
    printf("Your Choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:push();break;
        case 2:pop();break;
        case 3:peek();break;
        case 4:exit(0);
        default :printf("Invalid Choice\n");
    }
}
}

