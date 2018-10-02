#include<iostream>
using namespace std;
void longestsubsequencewithk(string str,int k){
    int max_char=26;
    int n=str.length();
    int freq[max_char]={0};
    for(int i=0;i<n;i++){
        freq[str[i]-'a']++;
    }
    for(int i=0;i<n;i++){
        if(freq[str[i]-'a']>=k){
            cout<<str[i];
        }
    }
}
int main(){
    string str="aabbaabacabb";
    int k=2;
    longestsubsequencewithk(str,k);
    return 0;
}