#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void secondlargest(int arr[],int size){
    int i;
    int first=INT_MIN;
    int second=INT_MIN;
    if(size<2){
        cout<<"Invalid Input! Add more elements in the array ";
        return ;
    }
    for(int i=0;i<size;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second &&arr[i]!=first){
            second=arr[i];
        }
    }
    if(second==INT_MIN){
        cout<<"Second Largest Element does not exists ";
    }
    else{
        cout<<"The Second Largest Element is "<<second;
    }
}
int main(){
    int arr[]={12,35,1,10,34,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    secondlargest(arr,n);
    return 0;
}