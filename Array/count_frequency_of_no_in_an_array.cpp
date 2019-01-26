#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void count_frequency(int arr[],int n){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto it: m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main(){
    int arr[]={10,20,20,10,10,5,10,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    count_frequency(arr,n);
    return 0;
}