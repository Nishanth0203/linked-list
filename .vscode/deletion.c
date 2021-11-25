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
/*//case 1:
struct node *deletefirst(struct node *head){
struct node *ptr=head;
head=head->next;
free(ptr);
return head;
}*/
//case 2:
/*struct node *deletionatindex(struct node *head,int index){
    struct node *p=head;
    struct node *q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}*/
// case 3:
/*struct node *deletionatend(struct node *head){
struct node *p=head;
struct node *q=head->next;
while(q->next!=NULL)
{
    p=p->next;
    q=q->next;
}
p->next=NULL;
free(q);
return head;
}*/
//case 4:
struct node *deletionatindex(struct node *head,int value){
    struct node *p=head;
    struct node *q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next
    }
    return head;
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
   printf("before deletion");
   traversal(head);
   //head=deletefirst(head);//for deleting the first element 
   //head=deletionatindex(head,2);
   head=deletionatend(head);
   printf("linked list after deletion");
   traversal(head);
    return 0;
}