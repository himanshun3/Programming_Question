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
void inorder(struct node* temp){
    if(!temp){
        return;
    }
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}
struct node* deleteleaf(struct node* temp){
    if(temp->left==NULL && temp->right==NULL){
        free(temp);
        return NULL;
    }
    temp->left=deleteleaf(temp->left);
    temp->right=deleteleaf(temp->right);
    return temp;
}
int main(){
    struct node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    cout<<"Before deleting the leaf nodes ";
    inorder(root);
    cout<<endl;
    cout<<"After deleting the leaf nodes ";
    deleteleaf(root);
    inorder(root);
    return 0;
}