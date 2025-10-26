#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{
    int data;
    struct Queue *next;
} Node;

Node *front = NULL;
Node *rear = NULL;
Node *temp;
int enqueue(int x){
    Node *newnode;
    newnode = (Node*)malloc(sizeof(Node));
    newnode ->data = x;
    newnode ->next = NULL;

    if(front == NULL && rear == NULL){
        front = rear = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}

int dequeue(){
    temp = front;
    if(front ==NULL && rear ==NULL){
        printf("Queue Underflow");
    }
    else{
        front = front ->next;
        free(temp);
    }
}

int peek(){
    if(front==NULL && rear==NULL){
        printf("Queue is empty");
    }
    else{
        printf("%d", front->data);
    }
}

void display(){
    temp = front;
    if(front==NULL && rear==NULL){
        printf("Queue is empty");
    }
    else{
        while(temp!=0){
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
}
int main(){
    int choice, value;
    while(1) {
        printf("\n\nQueue Menu:");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    }
}

