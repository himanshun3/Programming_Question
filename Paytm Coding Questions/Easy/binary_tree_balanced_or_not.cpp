#include<iostream>
#include<stdio.h>
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
int height(struct node* node){
    if(node==NULL){
        return 1;
    }
    else{
        return 1+max(height(node->left),height(node->right));
    }
}
int max(int a,int b){
    return (a>=b)?a:b;
}
bool isbalanced(struct node* node){
    int lh=height(node->left);
    int rh=height(node->right);
    if(node==NULL){
        return 1;
    }
    if(abs(lh-rh)<=1 && isbalanced(node->left) && isbalanced(node->right)){
        return 1;
    }
    return 0;
}
int main(){
    struct node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    root->left->left->left=newnode(6);
    if(isbalanced(root)){
        cout<<"The Tree is balanced ";
    }
    else{
        cout<<"The tree is not balanced ";
    }
    return 0;
}