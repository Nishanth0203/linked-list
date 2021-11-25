/* Algorithm
1. start
2. create a node using structure
3. creating two attributes head and tail which are initialized to NULL
4. creating a function addnode
4.a creating a new node
4.b if the list is empty both head and tail will point ot nw node
4.c if the list is non empty then new node will be added after tail such that tails next will point to newnode
5. creating a function countnodes
5.a creating a current attribute which will be pointing to head
5.b the current pass through the linked list and counts the no of nodes until the current points to NULL
6. craeting a function display which displays the no of nodes
6.a creating a current attribute which points to head
6.b if the head is NULL then it prints empty
6.c if the list is non empty then current passes through the lsit until it founds the NULL and printing the attributes
7. initializing the main function 
7.a giving the data for datanodes
7.b calling the display function
8. Stop8*/ 
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head,*tail=NULL;
void addnode(int data){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
}
int countnodes(){
    int count=0;
    struct node *current=head;
    while(current!=NULL)
    {
        count++;
        current=current->next;
    }
    return count;
}
void display(){
    struct node *current=head;
    if(head==NULL){
        printf("List is emmpty");
        return;
    }
    printf("nodes of singly linked list:\n");
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
int main()
{
    addnode(1);
    addnode(2);
    addnode(3);
    addnode(4);
    display();
    printf("count of nodes present in the list : %d",countnodes());
    return 0;
}