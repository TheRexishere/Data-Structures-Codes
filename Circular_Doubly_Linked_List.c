// Circular Doubly Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int num;
    struct Node *pre,*next;
}*start,*end,*temp;

void insertend()
{
    temp = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the Value:");
    scanf("%d",&temp->num);

    if(start == NULL)
    {
        start = temp;
        end = start;
        end->next = start;
        start->pre =end;
    }
    else
    {
        end->next = temp;
        temp->pre = end;
        end = temp;
        end->next = start;
        start->pre = end;
    }
}


void display()
{
    temp = start;
    if(start == NULL)
    {
        printf("List is empty!!");
        exit(0);
    }
    printf("Elements of list :\n");
    do
    {
        printf("%d -> ",temp->num);
        temp = temp->next;
    }while(temp != start);
    printf("NULL\n");
}

void main()
{
    start = NULL;
    end = NULL;
    int choice;
    while(choice != 3)
    {
        printf("Circular Doubly Linked List:\n");
        printf("1)Insert at End\n");
        printf("2)Display\n");

        scanf("%d",&choice);

        if(choice == 1) insertend();
        else display();
    }
}
