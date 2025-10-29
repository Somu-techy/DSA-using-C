#include <stdio.h>
#define N 5

int front=-1;
int rear=-1;
int queue[N];

int enqueue(int x){
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else if ((rear+1)%N==front){
        printf("Queue is full");
    }
    else
    rear = (rear+1)%N;
    queue[rear]=x;
}

int dequeue(){
    if(front ==-1 && rear ==-1){
        printf("Queue is empty");
    }
    else if(rear == front){
        front = rear =-1;
    }
    else{
        front = (front+1)%N;
    }
}

int peek(){
    printf("%d ",queue[front]);
}

void display(){
    int i = front;
    if(front ==-1 && rear ==-1){
        printf("Queue is empty");
    }
    else
    while(i!=rear){
        printf("%d ",queue[i]);
        i=(i+1)%N;
    }
    printf("%d ",queue[i]);
}

        int main(void) {
            int choice, x;
            while (1) {
                printf("\n--- Circular Queue Menu ---\n");
                printf("1. Enqueue\n");
                printf("2. Dequeue\n");
                printf("3. Peek (front)\n");
                printf("4. Display\n");
                printf("5. Exit\n");
                printf("Enter your choice: ");
                if (scanf("%d", &choice) != 1) {
                    int c;
                    while ((c = getchar()) != '\n' && c != EOF) {}
                    printf("Invalid input. Please enter a number.\n");
                    continue;
                }
                switch (choice) {
                    case 1:
                        printf("Enter value to enqueue: ");
                        if (scanf("%d", &x) != 1) {
                            int c;
                            while ((c = getchar()) != '\n' && c != EOF) {}
                            printf("Invalid input.\n");
                        } else {
                            enqueue(x);
                        }
                        break;
                    case 2:
                        dequeue();
                        break;
                    case 3:
                        if (front == -1 && rear == -1) {
                            printf("Queue is empty\n");
                        } else {
                            peek();
                            printf("\n");
                        }
                        break;
                    case 4:
                        display();
                        printf("\n");
                        break;
                    case 5:
                        printf("Exiting...\n");
                        return 0;
                    default:
                        printf("Invalid choice. Try again.\n");
                }
            }
        }
    
