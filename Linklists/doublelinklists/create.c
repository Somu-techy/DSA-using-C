#include <stdio.h>
#include <stdlib.h>
int main(){
typedef struct node 
{
    int data;
    struct node *next;
    struct node *prev;
} Node;

Node *newnode,*head=NULL,*tail,*temp; int n;
printf("how many nodes you wanna crt?: ");
scanf("%d",&n);
while(n!=0){
newnode = (Node*)malloc(sizeof(Node));  
printf("Enter data: ");
scanf("%d",&newnode -> data);
newnode->next = NULL;
newnode->prev= NULL;
if(head==NULL)
{
    head=tail=newnode;
}
else{
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
n--;
}

temp = head;
while(temp!=NULL){
    printf("%d-> ",temp->data);
    temp=temp->next;
}
printf("NULL");
}

