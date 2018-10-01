#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="Himanshu Kumar Narang";
    cout<<str[0]<<" ";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            cout<<str[i+1]<<" ";
        }
    }
    return 0;
}