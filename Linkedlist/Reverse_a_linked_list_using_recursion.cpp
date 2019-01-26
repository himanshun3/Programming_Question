#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
void reverselinkedlist(struct node *head){
    if(head==NULL){
        return;
    }
    reverselinkedlist(head->next);
    cout<<head->data<<" ";
}
void push(struct node **head,int data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=*head;
    *head=new_node;
}
int main(){
    struct node* head=NULL;
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);
    reverselinkedlist(head);
    return 0;
}