#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printcount(string s){
    map<pair<char,char>,int>dpair;
    for(int i=0;i<s.length();i++){
        dpair[make_pair(s[i],s[i+1])]++;
    }
    for(auto it=dpair.begin();it!=dpair.end();it++){
        cout<<it->first.first<<it->first.second<<" -> "<<it->second<<endl;
    }
}
int main(){
    string s="abababbacacbcacbacabaca";
    printcount(s);
    return 0;
}