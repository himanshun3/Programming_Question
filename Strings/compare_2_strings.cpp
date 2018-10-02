#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void compare(string s1,string s2){
    if(s1==s2){
        cout<<s1<<" is equal to "<<s2<<endl;
    }
    else  if(s1>s2){
        cout<<s1<<" is greater than "<<s2<<endl;
    }
    else if(s1<s2){
        cout<<s1<<" is smaller than "<<s2<<endl;
    }
    else{
        cout<<s1<<" is not equal to "<<s2<<endl;
    }
}
int main(){
    string str1="Geeks";
    string str2="forGeeks";
    compare(str1,str2);
    return 0;
}