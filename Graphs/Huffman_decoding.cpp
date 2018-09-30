void decode_huffman(struct node * root, string s){
    struct node* current=root;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            current=current->left;
        }
        else{
            current=current->right;
        }
        if(current->left==NULL && current->right==NULL){
            cout<<current->data;
            current=root;
        }
    }
}