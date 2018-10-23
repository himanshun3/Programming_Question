#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={12,4,6,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                --n;
            }
            else{
                ++j;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}