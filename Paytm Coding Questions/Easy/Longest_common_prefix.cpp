#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="geeks";
    string s2="dgeek";
    string temp;
    int count=0;
    for(int i=0;i<=s1.size();i++){
        string s=s1.substr(0,i);
        if(strstr(s2.c_str(),s.c_str())){
            temp=s;
            count=i;
        }
    }
    int b=s2.find(temp);
    if(count==0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<b<<" "<<temp<<endl;
    }
    return 0;
}
