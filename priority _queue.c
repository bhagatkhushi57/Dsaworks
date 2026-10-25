#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    int priority;
    struct Node *prev; 
    struct Node *next;

};
struct Node *head=NULL;
void insert(int data,int priority){
    struct Node *newNode,*temp;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->priority=priority=priority;

    if(head==NULL){
        newNode->next=newNode;
        newNode->prev=newNode;
        head=newNode;
        return;
    }
    if(priority<head->priority)
    {
        newNode->next=head;
        newNode->prev=head->prev;
        head->prev=newNode;
        head=newNode;
        return;
    }
    temp=head;
    while(temp->next !=head && temp->next->priority<=priority){
        temp=temp->next;
    }
    newNode->next=temp->next;
    newNode->prev=temp;
    temp->next=newNode;
}
void delete(){
    struct Node *temp;
    if(head==NULL){
        printf("Priority Queue is Empty\n");
        return;
    }
    temp=head;
    printf("Deleted element=%d\n"
,head->data);
if(head->next==head){
    head=NULL;
    free(temp);
    return;
}
head->prev->next=head->next;
head->next->prev=head->prev;
head=head->next;
free(temp);
}
void display()
{
    struct Node*temp;
    if(head==NULL){
        printf("Priority Queue is Empty\n");
        return;
    }
    temp=head;
    do{
        printf("Data=%d Priority=%d\n",temp
    ->data,temp->priority);
    temp=temp->next;
}
while(temp!=head);
}
int main(){
    insert(10,3);
    insert(20,1);
    insert(30,2);
    insert(40,1);
    display();
    delete();
    display();
    return 0;
}






