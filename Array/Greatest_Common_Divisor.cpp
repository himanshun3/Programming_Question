#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int temp;
    while(b>0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int arr[]={10,20,20,10,10,5,10,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=arr[0];
    for(int i=0;i<n;i++){
        result=gcd(result,arr[i]);
    }
    cout<<"GCD is "<<result;
    return 0;
}