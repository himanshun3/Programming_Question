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
    new_node->right=new_node->left=NULL;
    return new_node;
}
int height(struct node* temp){
    if(temp==NULL){
        return 0;
    }
    else{
        int lheight=height(temp->left);
        int rheight=height(temp->right);
        if(lheight>rheight){
            return lheight+1;
        }
        else{
            return rheight+1;
        }
    }
}
void printgivenlevel(struct node* temp,int level){
    if(temp==NULL){
        return;
    }
    if(level==1){
        cout<<temp->data<<" ";
    }
    else if(level>1){
        printgivenlevel(temp->left,level-1);
        printgivenlevel(temp->right,level-1);
    }
}
void levelorder(struct node* temp){
    int h=height(temp);
    int i;
    for(int i=1;i<=h;i++){
        printgivenlevel(temp,i);
    }
}
int main(){
    struct node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    cout<<"Level order traversal is ";
    levelorder(root);
    return 0;
}