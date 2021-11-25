#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    struct node *ptr=head;
    do{
        printf("Element is : %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
int main()
{   
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    //assigning head to second
    head->data=10;
    head->next=second;
    //assigning second to third
    second->data=20;
    second->next=third;
    //assigning third to fourth
    third->data=30;
    third->next=fourth;
    //assigning fourth to head
    fourth->data=40;
    fourth->next=head;
    printf("tarversed linked list:");
    traversal(head);
    return 0;
}