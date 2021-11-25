#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *p)
{
    while(p!=NULL)
    {
    printf("Element : %d\n",p->data);
    p=p->next;
    }
}
struct node *insertatend(struct node *head,int data)
{
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    ptr->data=data;
    while(p->next !=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    //assigning head to second
    head->data=10;
    head->next=second;
    //assigning second to third
    second->data=20;
    second->next=third;
    //assigning third to fourth
    third->data=30;
    third->next=fourth;
    //terminating
    fourth->data=40;
    fourth->next=NULL;
    printf("before inserting");
    traversal(head);
    printf("after inserting");
    head=insertatend(head,90);
    traversal(head);
    return 0;
}