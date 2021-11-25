#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void addlast(struct node **head, int val)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if(*head==NULL)
    *head=newnode;
    else{
        struct node *lastnode=*head;
        while(lastnode->next!=NULL)
        {
            lastnode=lastnode->next;
        }
        lastnode->next=newnode;
    }
}
int searchnode(struct node *head,int key)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        return 1;
        temp=temp->next;
    }
    return -1;
}
int main()
{
    struct node *head=NULL;
    addlast(&head,10);
    addlast(&head,20);
    addlast(&head,30);
    if(searchnode(head,20)==1)
    printf("search found ");
    else
    printf("search not found\n");
    return 0;
}