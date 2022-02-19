#include<stdio.h>

int s[100],n,sp;
sp=-1;


void PUSH()
{
    if(sp==(n-1))
    {
        printf("\nStack is Full\n");
    }
    else
    {
        sp=sp+1;
        printf("\nEnter the element\n");
        scanf("%d",&s[sp]);
    }
}

void POP()
{
    if(sp<0) printf("\nStack is Empty\n");
    else
    {
        sp--;
        printf("\nPOP() successful !!\n");
    }
}

void display()
{
    int i;
    printf("\nSTACK:\n");
    for(i=sp;i>=0;i--) printf("    %d\n",s[i]);

}

void main()
{
    int ch;
    printf("Enter the size of stack:\n");
    scanf("%d",&n);
    while(1)
    {
        printf("\n****Stacks(Array)****\n\n");
        printf("1)PUSH()\n");
        printf("2)POP()\n");
        printf("3)Display\n");
        printf("4)Exit\n\n");
        printf("Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:PUSH();break;
        case 2:POP();break;
        case 3:display();break;
        case 4:exit(0);
        }

    }
}
