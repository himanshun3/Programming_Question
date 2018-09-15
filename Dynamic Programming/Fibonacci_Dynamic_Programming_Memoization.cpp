#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int look[100];
int fib(int n){
    if(look[n]==-1){
        if(n<=1){
            look[n]=n;
        }
        else{
            look[n]=fib(n-1)+fib(n-2);
        }
    }
    return look[n];
}
int main(){
    int n=9;
    for(int i=0;i<100;i++){
        look[i]=-1;
    }
    cout<<"Fiboncci number is "<<fib(n)<<endl;
    return 0;
}