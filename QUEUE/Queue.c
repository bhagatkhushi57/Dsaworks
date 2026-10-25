#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void Enqueue(){
    int value;
    if(rear==MAX -1){
        printf("Queue overflow\n");

    }
    else{
        printf("Enter value");
        scanf("%d",&value);
        if(front ==-1)
        front=0;
        rear++;
        queue[rear]=value;
        printf("value enqueued\n");


    }
}
void Dequeue(){
    if(front==-1||front>rear)
    {
        printf("Queue underflow\n");

    }
    else{
        printf("Dequeued value=%d\n", queue[front]);
        front++;
        if(front>rear)
        front=rear=-1;

    }
}

void Display(){
    int i;
    if(front==-1){
        printf("Queue is empty\n \t");
    }
    else{
        printf("Queue:");
        for(i=front;i<=rear;i++)
        printf("%d\t",  queue[i]);
        printf("  \n");

     }
    }
    int main(){
        int choice;
        while(1){
            printf("\n1. Enqueue\n");
            printf("\n2.Dequeue\n");
            printf("\n3.Display\n");
            printf("\n4.Exit\n");

            printf("Enter your choice:");
            scanf("%d", &choice);
            switch (choice){
                case 1:
                    Enqueue();
                break;
                 case 2:
                     Dequeue();
                break;
               case 3:
                 Display();
                case 4:
                return 0;
                default:
                printf("Invalid choice \n");
        


            }
        }
}