#include<iostream>
#include<stdio.h>
using namespace std;
void segregate(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            j++;
            swap(arr[i],arr[j]);
        }
    }
}
int main(){
    int arr[]={12, 10, 9, 45, 2, 10, 10, 45};
    int n=sizeof(arr)/sizeof(arr[0]);
    segregate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}