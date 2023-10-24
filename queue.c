#include<stdio.h>
#include<stdlib.h>
#define N 4
int queue [N];
int x;
int front=-1;
int rear=-1;
void enqueue(int data){
    if(rear==N-1) printf("\nOverflow");
    else if ( front ==-1 && rear==-1)
    {
        front = rear=0;
        queue[rear]=data;
    } else{
        rear++;
        queue[rear]=data;
    }
    
}
void dequeue(){
    if(front ==-1&& rear ==-1) printf("Underflow");
    else if (front == rear)
    {
        front = rear=-1;
    } else {
        front++;
    }
}
void peek(){
   if(front ==-1&& rear ==-1) printf("Underflow");
   else{
    printf("%d \t",queue[front]);
   } 
}
void display(){
    if(front ==-1&& rear ==-1) printf("Empty");
    else{
        for(int i=front;i<rear+1;i++){
            printf("%d \t",queue[i]);
        }
    }
}
void main(){
     int ch;
    do{
    printf("\nEnter your choice:\n 1.Enqueue\n 2.Dequeue\n 3.Peek\n 4.Display\n 5.Exit\n ");
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("Enter element to be enqueue");
        scanf("%d",&x);
        enqueue(x); break;
        case 2: dequeue(); break;
        case 3: peek(); break;
        case 4: display(); break;
        case 5: exit(0); break;
        default : printf("\nInvalid"); break;
    }
    } while (ch!=5);
}