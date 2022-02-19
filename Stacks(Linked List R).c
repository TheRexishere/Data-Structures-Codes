#include<stdio.h>
#include<stdlib.h>

int a[100],stpr,n;

stpr=-1;

void push()
{
    if(stpr==(n-1))
    {
        printf("Stack is Full!!\n");
    }
    else
    {
        printf("Enter value : ");
        scanf("%d",&a[stpr]);
        stpr++;
    }
}

void pop()
{
    if(stpr==-1)
    {
        printf("Stack is Empty!!\n");
    }
    else
    {
        stpr--;
    }
}

void peek()
{
    if(stpr==-1)
    {
        printf("Stack is Empty!!\n");
    }
    else
    {
        printf("Last Element is %d\n",a[stpr-1]);
    }
}

int main()
{
int ch;
printf("Enter the size of stack:");
scanf("%d",&n);

// Interface //
while(1)
{
    printf("*****Stack*****\n");
    printf("Operations:\n");
    printf("1.)Push\n2.)Pop\n3.)Peek\n4.)Exit");
    printf("Your Choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:push();break;
        case 2:pop();break;
        case 3:peek();break;
        case 4:exit(0);
        default :printf("Invalid Choice");
    }
}
}



