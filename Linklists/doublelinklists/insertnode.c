#include <stdio.h>
#include <stdlib.h>


typedef struct node 
{
    int data;
    struct node *next;
    struct node *prev;
} Node;
Node *newnode,*head=NULL,*tail,*temp; int n; 
 
int createlist(){
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

int insertfrmfirst(){
    int choice;
printf("\n Wanna insert node at first (0/1)?: ");
scanf("%d",&choice);
if(choice){
    newnode = (Node*)malloc(sizeof(Node));  
printf("Enter data: ");
scanf("%d",&newnode -> data);
newnode->next = NULL;
newnode->prev= NULL;
}
if(head==NULL){
    printf("Empty list");
}
else{
newnode->next = head;
head->prev = newnode;
head = newnode;
}

temp = head;
while(temp!=NULL){
    printf("%d-> ",temp->data);
    temp=temp->next;
}
printf("NULL");
}

int insertatlast(){
     int choice;
printf("\n Wanna insert node at last (0/1)?: ");
scanf("%d",&choice);
if(choice){
    newnode = (Node*)malloc(sizeof(Node));  
printf("Enter data: ");
scanf("%d",&newnode -> data);
newnode->next = NULL;
newnode->prev= NULL;
}
if(tail==0){
    printf("List is empty");
}
else{
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
temp = head;
while(temp!=NULL){
    printf("%d-> ",temp->data);
    temp=temp->next;
}
printf("NULL");
printf("\n");
}

// int reverse(){
//     temp = tail;
//     while(temp!=NULL){
//         printf("%d-> ", temp->data);
//         temp = temp->prev;
//     }
//     printf("NULL");
// }

int main(){
createlist();
insertfrmfirst();
insertatlast();
// reverse();
}