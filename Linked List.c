#include<stdio.h>
#include<stdlib.h>

struct node {
    char name;
    int num;
    struct node *next;
}*start,*nextptr,*temp;

struct node* create(){
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the name:\n");
    scanf("%d",ptr->name);
    printf("Enter the number:\n");
    scanf("%d",ptr->num);
    ptr->next=NULL;
    return ptr;

}

int main(){
    start=NULL;
    nextptr= create();
    printf("%d",nextptr->name);

    return 0;
}
