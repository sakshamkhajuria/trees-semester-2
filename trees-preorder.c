#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new; 
}

void preorder(struct node* root){
    if(root == NULL){
        return;
    }
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
}

int main(){
    struct node *root = newNode(1);
    root->right = newNode(2);
    root->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(5);
    printf("PreOrder traversal of the BST is:\n");
    preorder(root); 
    return 0;
}
