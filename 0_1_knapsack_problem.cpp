#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
    return (a>b)? a:b;
}
int knapsack(int W,int n,int w[],int val[]){
    int i,j;
    int k[n+1][W+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            if(i==0 || j==0){
                k[i][j]=0;
            }
            else if(w[i-1]<=W){
                k[i][j]=max(val[i-1]+k[i-1][j-w[i-1]],k[i-1][j]);
            }
            else{
                k[i][j]=k[i-1][j];
            }
        }
    }
    return k[n][W];
}
int main(){
    int w[]={10,20,30};
    int val[]={60,100,120};
    int n=sizeof(w)/sizeof(w[0]);
    int W=50;
    cout<<knapsack(W,n,w,val);
    return 0;
}