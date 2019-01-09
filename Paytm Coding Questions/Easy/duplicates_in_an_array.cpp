#include<iostream>
#include<stdio.h>
using namespace std;
void duplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
}
int main(){
    int arr[]={1,2,3,1,3,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    duplicate(arr,n);
    return 0;
}