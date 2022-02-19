#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int num;
    struct node *left,*right;
}tr;

tr *root,*new;

void create();
void preorder(tr *t);
void postorder(tr *t);
void inorder(tr *t);

int main()
{
    int ch=0;
    while(ch!=5){
    printf("\nBinary Search Tree:\n1)Enter A Member\n2)Pre-order\n3)Post-order\n4)In-order\n5)Exit\nYour Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:create();break;
        case 2:new=root;
               preorder(new);break;
        case 3:new=root;
               postorder(new);break;
        case 4:new=root;
               inorder(new);break;
    }}
    return 0;
}

void create()
{
    new=(tr *)malloc(sizeof(tr));
    printf("Enter the Number:");
    scanf("%d",&new->num);
    new->left=NULL;
    new->right=NULL;
    
    tr *p,*q;
    if(root==NULL) root=new;
    else 
    {
    int x=0;
    p=root;
    while(p!=NULL)
    {
        q=p;
        if (new->num<p->num) p=p->left;
        else if (p->num<new->num) p=p->right;
        else {
        printf("No Duplicate Value\n");return;
        }
    }
        if(new->num<q->num) q->left=new;
        else q->right=new;
    }
    printf("%d is Inserted\n",new->num);
}

void preorder(tr *t)
{
if(t!=NULL)
{
    printf("\n%d\n",t->num);
    preorder(t->left);
    preorder(t->right);
}
}

void postorder(tr *t)
{
if(t!=NULL)
{
    postorder(t->left);
    postorder(t->right);
    printf("\n%d\n",t->num);
}
}

void inorder(tr *t)
{
if(t!=NULL)
{
    inorder(t->left);
    printf("\n%d\n",t->num);
    inorder(t->right);
}
}
