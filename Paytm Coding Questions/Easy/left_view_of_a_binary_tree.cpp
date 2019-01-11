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
    new_node->right=NULL;
    new_node->data=data;
    return new_node;
}
void leftview(struct node* root, int level,int *maxlevel){
    if(root==NULL){
        return;
    }
    if(*maxlevel<level){
        cout<<root->data<<" ";
        *maxlevel=level;
    }
    leftview(root->left,level+1,maxlevel);
    leftview(root->right,level+1,maxlevel);
}
void left(struct node* root){
    int maxlevel=0;
    leftview(root,1,&maxlevel);
}
int main(){
    struct node* root=newnode(12);
    root->left = newnode(10); 
    root->right = newnode(30); 
    root->right->left = newnode(25); 
    root->right->right = newnode(40); 
    left(root);
    return 0;
}