#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
void push(struct node **head,int data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=*head;
    *head=new_node;
}
int loopdetect(struct node* head){
    struct node* p1=head;
    struct node* p2=head;
    while(p1 && p2 && p2->next){
        p1=p1->next;
        p2=p2->next->next;
        if(p1==p2){
            cout<<"There is a loop ";
            return 1;
        }
    }
    return 0;
}
int main(){
    struct node* head=NULL;
    push(&head,20);
    push(&head,15);
    push(&head,10);
    push(&head,5);
    push(&head,0);
    head->next->next=head;
    loopdetect(head);
    return 0;
}