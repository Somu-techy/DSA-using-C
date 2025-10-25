#include<stdio.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

int enqueue(int x){
    if(rear == N-1){
        printf("Queue Overflow");
    }
    else if(front == -1  && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else
    rear++;
    queue[rear] = x;
}
int dequeue(){
    if(front == -1 && rear == -1){
        printf("Queue underflow");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else
    {
        front++;

    } 
}

int peek(){
    printf("%d", queue[front]);
}

int display(){
    if(front ==-1 && rear ==-1){
        printf("Queue is empty");
    }
    else{
        for(int i=front; i<rear+1; i++){
            printf("%d ",queue[i]);
        }
    }
}

int main(){

    int choice, value;
    while(1) {
        printf("\n\nQueue Operations:");
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
                printf("\nExiting...");
                return 0;
            default:
                printf("\nInvalid choice!");
        }
    }

}