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
int getcount(struct node* head){
    int count=0;
    struct node* current=head;
    while(current!=NULL){
        count++;
        current=current->next;
    }
    return count;
}
int getnth(struct node* head,int n){
    struct node* current=head;
    for(int i=0;i<n-1 && current!=NULL;i++){
        current=current->next;
    }
    return current->data;
}
void printreverse(struct node* head){
    int n=getcount(head);
    for(int i=n;i>=1;i--){
        cout<<getnth(head,i);
    }
}
int main(){
    { 
    /* Start with the empty list */
    struct node* head = NULL; 
  
    /* Use push() to construct below list 
     1->2->3->4->5 */
    push(&head, 5); 
    push(&head, 4); 
    push(&head, 3); 
    push(&head, 2); 
    push(&head, 1); 
  
    printreverse(head); 
  
    return 0; 
} 
}