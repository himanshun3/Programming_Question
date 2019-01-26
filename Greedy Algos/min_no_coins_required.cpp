#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void no_of_coins(int a[],int n,int m){
    vector<int> arr;
    for(int i=n-1;i>=0;i--){
        if(m>=a[i]){
            m-=a[i];
            arr.push_back(a[i]);
        }
    }
    int  size=arr.size();
    cout<<"Minimum no of Coins required are "<<size<<endl;
    cout<<"Coins required are ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a[]={1,2,5,10,20,50,100,500,2000};
    int m=73;
    int n=sizeof(a)/sizeof(a[0]);
    no_of_coins(a,n,m);
    return 0;
}