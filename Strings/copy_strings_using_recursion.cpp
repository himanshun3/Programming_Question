#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void copy(char s1[],char s2[],int i=0){
    s2[i]=s1[i];
    if(s1[i]=='\0'){
        return;
    }
    copy(s1,s2,i+1);
}
int main(){
    char s1[100]="Himanshu";
    char s2[100]="";
    copy(s1,s2);
    cout<<s2<<" ";
    return 0;
}