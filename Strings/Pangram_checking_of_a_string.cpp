#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(string str){
    vector<bool> arr(26,false);
    int index;
    for(int i=0;i<str.length();i++){
        if('A'<=str[i] && str[i]<='Z'){
            index=str[i]-'A';
        }
        else if('a'<=str[i] && str[i]<='z'){
            index=str[i]-'a';
        }
        arr[index]=true;
    }
    for(int i=0;i<=25;i++){
        if(arr[i]==false){
            return false;
        }
    }
    return true;
}
int main(){
    string str="The quick brown fox jumps over the lazy  dog";
    if(check(str)==false){
        cout<<"This string is not pangram";
    }
    else{
        cout<<"This string is a pangram";
    }
    return 0;
}
