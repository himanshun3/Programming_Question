#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void compare(string s1,string s2){
    int m=s1.size();
    int n=s2.size();
    char a[m+1];
    char b[n+1];
    strcpy(a,s1.c_str());
    strcpy(b,s2.c_str());
    cout<<"First string is ";
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Second string is ";
    for(int j=0;j<n;j++){
        cout<<b[j]<<" ";
    }
}
int main(){
    string s1="Himanshu";
    string s2="Narang";
    compare(s1,s2);
    return 0;
}