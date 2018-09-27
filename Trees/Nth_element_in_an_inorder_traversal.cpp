#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newnode(int data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->left=new_node->right=NULL;
    return new_node;
}
void inorder(struct node* temp,int n){
    if(temp==NULL){
        return;
    }
    static int count=0;
    if(count<=n){
        inorder(temp->left,n);
        count++;
        if(count==n){
            cout<<n<<"th element in an inorder traversal is "<<temp->data<<" ";
        }
        inorder(temp->right,n);
    }
}
int main(){
    struct node* root=newnode(10);
    root->left=newnode(20);
    root->right=newnode(30);
    root->left->left=newnode(40);
    root->left->right=newnode(50);
    int n=4;
    inorder(root,n);
    return 0;
}