#include <stdio.h>
#include <stdlib.h>
typedef struct Stack
{
    int data;
    struct Stack *link;
}stack;

stack *newnode;
stack *top = 0;
stack *temp;

void push(int x){
    newnode = (stack*)malloc(sizeof(stack));
    newnode->data = x;
    newnode->link = top;
    top = newnode;
}

void pop(){
    temp = top;
    if(top==0){
        printf("Stack underflow");
    }
    else{
        top = top->link;
        free(temp);
    }
}

void display(){
    temp = top;
    if(top==0){
        printf("Stack underflow");
    }
    else{
        while(temp!=0){
            printf("%d ",temp->data);
            temp=temp->link;
        }
    }
}
void peek(){
    printf("%d",top->data);
}

void main(){
    int choice, value;
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}

