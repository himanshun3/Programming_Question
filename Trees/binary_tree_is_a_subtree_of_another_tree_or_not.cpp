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
};
bool areidentical(struct node* root1,struct node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1==NULL || root2==NULL){
        return false;
    }
    return (root1->data==root2->data && areidentical(root1->left,root2->left) && areidentical(root1->right,root2->right));
}
bool issubtree(struct node* t,struct node* s){
    if(s==NULL){
        return true;
    }
    if(t==NULL){
        return false;
    }
    if(areidentical(t,s)){
        return true;
    }
    return issubtree(t->left,s) || issubtree(t->right,s);
}
int main(){
    struct node *T        = newnode(26); 
    T->right              = newnode(3); 
    T->right->right       = newnode(3); 
    T->left               = newnode(10); 
    T->left->left         = newnode(4); 
    T->left->left->right  = newnode(30); 
    T->left->right        = newnode(6);
    struct node *S    = newnode(10); 
    S->right          = newnode(6); 
    S->left           = newnode(4); 
    S->left->right    = newnode(30); 
    if(issubtree(T,S)){
        cout<<"Tree 2 is a subtree of Tree 1 ";
    }
    else{
        cout<<"Tree 2 is not a subtree of Tree 1 ";
    }
    return 0;
}