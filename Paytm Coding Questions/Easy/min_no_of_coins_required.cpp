#include<iostream>
#include<stdio.h>
using namespace std;
int countmin(int arr[],int n,int V){
    int count=0;
    if(V==0){
        return 0;
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]<=V){
                count++;
                V=V-arr[i];
            }
        }
        return count;
    }
}
int main(){
    int arr[]={9,6,5,1};
    int V=11;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countmin(arr,n,V);
    return 0;
}