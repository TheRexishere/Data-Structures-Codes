#include<stdio.h>
#include<stdlib.h>

struct queue
{
   int num;
   struct queue *next;
}*front,*rear,*temp;

void insert()
{
   struct queue *ptr;
   ptr=(struct queue *)malloc(sizeof(struct queue));
   ptr->next=NULL;
   printf("Enter the Value:");
   scanf("%d",&ptr->num);
   if(rear==NULL)
   {
      rear=ptr;
      front=rear;
   }
   else
   {
      rear->next=ptr;
      rear=ptr;
   }
}
void delete()
{
   if(rear==NULL)
   {
      printf("Queue UnderFlow!!\n");
   }
   else if(front==rear)
   {
   front=NULL;free(rear);
   printf("Deleted!!!\n");
   rear=NULL;
   }
   else
   {
      temp=front;
      while(temp->next!=rear)
      {
         temp=temp->next;
      }
      temp->next=NULL;
      rear=temp;
      free(temp);
      printf("Deleted!!!\n");
   }
}
void display()
{
   temp=front;
   while(temp!=NULL)
   {
      printf("%d->",temp->num);
      temp=temp->next;
   }
   printf("Null");
}

int main()
{
   int ch;
   
   while(1)
   {
   printf("\n*****QUEUE*****\n");
   printf("Operations:\n");
   printf("1)Insertion\n2)Delete\n3)Display\n4)Exit\n");
   printf("Your Choice:");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1:insert();break;
      case 2:delete();break;
      case 3:display();break;
      case 4:exit(0);
      default :printf("Invalid Choice\n");
   }
   }
}
