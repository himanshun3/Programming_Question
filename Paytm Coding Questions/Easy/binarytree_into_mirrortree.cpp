#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newnode(int data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->left=NULL;
    new_node->data=data;
    new_node->right=NULL;
    return new_node;
}
void inorder(struct node* node){
    if(node==NULL){
        return;
    }
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}
void mirror(struct node* node){
    if(node==NULL){
        return;
    }
    else{
        struct node* temp;
        mirror(node->left);
        mirror(node->right);
        temp=node->left;
        node->left=node->right;
        node->right=temp;
    }
}
int main(){
    struct node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    inorder(root);
    cout<<endl;
    mirror(root);
    inorder(root);
    return 0;
}