#include <stdio.h>
#include <stdlib.h>
int main (){
  typedef struct node {
    int data ;
    struct node *next;
  } Node;
  // creating link list
   Node *head = NULL, *newnode, *temp; int n; int choice, pos, i=1;
   printf("How many nodes you want to create: ");
   scanf("%d",&n);
   while (n!=0){
   newnode = (Node*)malloc(sizeof(Node)); // creating a new address where data and next will be stored aka "node"
   printf("Enter data :" );
   scanf("%d",&newnode ->data ); // entering data for current node
   newnode ->next = NULL; // default next = NULL for current node
   if(head == 0)
   {
    head = temp = newnode; // taking the first node address to head and temp
   }else{
    temp ->next = newnode; // entering address of the new node in "next" of the current node
    temp = newnode; // updating temp pointer to new node 
   } 
   n--;
  }
   // display of the linklist
   temp = head; // bringing the temp to first node 
   while(temp!=NULL)
   { printf("%d ->", temp->data);
    temp = temp ->next; // traversing from each node 
   }
   printf( "NULL ");

  
   printf("\n Wanna insert a node at any position?: ");
   scanf("%d",&choice);
   if(choice){
    printf("what position you wanna enter a node?: ");
    scanf("%d",&pos);
    newnode=(Node*)malloc(sizeof (Node));
    printf("Enter a data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    temp = head;
    while(i<pos-1){
      temp=temp->next;
      i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;

    temp = head;
   while(temp!=NULL)
   {
    printf("%d-> ",temp->data);
    temp=temp->next;
   }
   printf("NULL");
   }
}
