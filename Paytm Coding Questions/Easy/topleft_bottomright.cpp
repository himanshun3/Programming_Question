#include<iostream>
#include<stdio.h>
using namespace std;
int count(int m,int n){
    if(m==1 || n==1){
        return 1;
    }
    else{
        return count(m-1,n)+count(m,n-1);  // if diagonals are also allowed then + count(m-1,n-1) 
    }
}
int main(){
    cout<<count(3,3);
    return 0;
}