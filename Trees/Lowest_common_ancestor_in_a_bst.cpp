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
struct node* lca(struct node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data>=n1 && root->data>=n2){
        return lca(root->left,n1,n2);
    }
    if(root->data<=n1 && root->data<=n2){
        return lca(root->right,n1,n2);
    }
    return root;
}
int main(){
    struct node* root=newnode(20);
    root->left=newnode(8);
    root->right=newnode(22);
    root->left->left=newnode(4);
    root->left->right=newnode(12);
    root->left->right->left=newnode(10);
    root->left->right->right=newnode(14);
    int n1=10;
    int n2=22;
    struct node* t=lca(root,n1,n2);
    cout<<"Lowest common ancestor of "<<n1<<" and "<<n2<<" is "<<t->data;
    return 0;
}