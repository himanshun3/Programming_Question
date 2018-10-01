#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare(string str){
    int n=str.length();
    for(int i=1;i<n;i++){
        if(str[i]!=str[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    string str="gggg";
    if(compare(str)){
        cout<<"All the characters of the string are same ";
    }
    else{
        cout<<"All the characters of the string are not same ";
    }
    return 0;
}