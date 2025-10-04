#include <stdio.h>
#define N 5

int stack[N]; int top = -1;int x,m;
int push(){
    printf("Enter data: ");
    scanf("%d",&x);
    if(top == N-1)
    {
        printf("\n Overflow");
    }
    else{
        top ++;
        stack[top] = x;
    }
}
int pop(){
    if(top == -1)
    printf("\n Underflow");
    else{
        printf("%d", stack[top]);
        top--;
    }
}
int peek(){
    if(top==-1){
        printf("\n Underflow");
    }
    else{
        printf("%d",stack[top]);
    }

}
int display(){
    for(int i=top; i>=0; i--)
    {
        printf("%d ",stack[i]);
    }
}
int main(){
    printf("Menu run?");
    scanf("%d", &m);
    while(m){
    int choice;
    printf(" \n Enter 1:Push ; 2:Pop ; 3:Peek ; 4:Display = ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: push();
        
        break;
    case 2: pop();
        
        break;
    case 3: peek();

        break;
    case 4: display();

        break;
    
    default:printf("\n Invalid input \n");
        break;
    }
}
}