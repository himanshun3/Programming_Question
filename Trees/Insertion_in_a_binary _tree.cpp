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
void inorder(struct node* temp){
    if(!temp){
        return;
    }
        inorder(temp->left);
        cout<<temp->data<<" ";
        inorder(temp->right);
}
void insert(struct node* temp,int data){
    queue<struct node*>q;
    q.push(temp);
    while(!q.empty()){
        struct node* temp=q.front();
        q.pop();
        if(!temp->left){
            temp->left=newnode(data);
            break;
        }
        else{
            q.push(temp->left);
        }
        if(!temp->right){
            temp->right=newnode(data);
            break;
        }
        else{
            q.push(temp->right);
        }
    }
}
int main(){
    struct node* root=newnode(10);
    root->left = newnode(11); 
    root->left->left = newnode(7); 
    root->right = newnode(9); 
    root->right->left = newnode(15); 
    root->right->right = newnode(8); 
    cout<<"Before Insertion ";
    inorder(root);
    int data=12;
    insert(root,data);
    cout<<endl;
    cout<<"After Insertion ";
    inorder(root);
    return 0;
}