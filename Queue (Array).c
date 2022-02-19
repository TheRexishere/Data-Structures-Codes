#include<stdio.h>
#include<stdlib.h>

int a[100],size,front,rear;

front=-1;
rear=-1;

void insert()
{
   int temp;
   if(rear+1!=size)
   {
      printf("Enter the Element:");
      scanf("%d",&temp);
      if(front==-1)
      {
         front++;rear++;
         a[rear]=temp;
      }
      else
      {
         rear++;
         a[rear]=temp;
      }
   }
   else
   {
     printf("Queue is Full!!!\n"); 
   }
}

void delete()
{
   int i;
   if(rear!=-1)
   {
      for(i=1;i<=rear;i++)
      {
         a[i-1]=a[i];
      }
      printf("Deletion Sucessfull!!");
      rear--;
   }
   else
   {
      printf("Queue is Empty!!\n");
   }
}

void display()
{
   int i;
   for(i=0;i<=rear;i++)
   {
      printf("%d  ",a[i]);
   }
}

int main()
{
   int ch;
   printf("Enter the size of the Queue:\n");
   scanf("%d",&size);
   if(size<=0) exit(0);
   
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
