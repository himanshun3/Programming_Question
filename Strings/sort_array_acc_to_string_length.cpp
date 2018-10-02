#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare(string str1,string str2){
    return str1.size()<str2.size();
}
void print(string str[],int n){
    for(int i=0;i<n;i++){
        cout<<str[i]<<" ";
    }
}
int main(){
    string arr[]={"Gurgaon","I","from","am"};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,compare);
    print(arr,n);
    return 0;
}