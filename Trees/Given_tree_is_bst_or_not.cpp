#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node*  right;
};
struct node* newnode(int data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->left=new_node->right=NULL;
    return new_node;
};
bool isbst(struct node* root,struct node* l=NULL,struct node* r=NULL){
    if(root==NULL){
        return true;
    }
    if(l!=NULL && l->data>=root->data){
        return false;
    }
    if(r!=NULL && r->data<=root->data){
        return false;
    }
    return (isbst(root->left,l,root) && isbst(root->right,root,r));
}
int main(){
    struct node* root=newnode(6);
    root->left=newnode(4);
    root->right=newnode(7);
    root->left->left=newnode(3);
    root->left->right=newnode(5);
    if(isbst(root)){
        cout<<"The given tree is a Binary Search Tree ";
    }
    else{
        cout<<"The given tree is not a Binary Search Tree ";
    }
    return 0;
}