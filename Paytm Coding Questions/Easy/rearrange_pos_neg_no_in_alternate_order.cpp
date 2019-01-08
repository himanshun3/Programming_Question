#include<iostream>
#include<stdio.h>
using namespace std;
int rearrange(int arr[],int size){
    int b[size];
    int m=0;
    int n=1;
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            b[m]=arr[i];
            m=m+2;
        }
        else{
            b[n]=arr[i];
            n=n+2;
        }
    }
    for(int i=0;i<size;i++){
        cout<<b[i]<<" ";
    }
}
int main(){
    int arr[]={-1,2,-3,-4,-5,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,size);
    return 0;
}