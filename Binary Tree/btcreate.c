#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}Node;

Node *root; int x;
Node* create()
{
    Node *newnode;
    newnode = (Node*)malloc(sizeof(Node));
    printf("Enter a data in the node(-1 for no data): ");
    scanf("%d",&x);
    if(x==-1){
        return NULL;
    }
    newnode->data=x;
    printf("Enter the left child\n");
    newnode->left = create();
    printf("Enter the right child\n");
    newnode->right = create();
    return newnode;

}

void preorder(Node *root){
    if(root == 0){
        return;
    }
    printf("%d, ",root->data);
    preorder(root->left);
    preorder(root ->right);
}
void inorder(Node *root){
    if(root == 0){
        return;
    }
    inorder(root->left);
    printf("%d, ",root->data);
    inorder(root->right);
}
void postorder(Node *root){ 
    if(root == 0){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d, ",root->data );
}


void main(){
    root = NULL;
    root = create();
    int choice;
    while(1){
        printf("\n1. Preorder Traversal\n");
        printf("2. Inorder Traversal\n");
        printf("3. Postorder Traversal\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("\nPreorder Traversal: ");
                preorder(root);
                break;
            case 2:
                printf("\nInorder Traversal: ");
                inorder(root);
                break;
            case 3:
                printf("\nPostorder Traversal: ");
                postorder(root);
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice!\n");
        }
    }
    
}

