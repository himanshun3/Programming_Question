#include<iostream>
#include<stdlib.h>
#include<limits.h>
#include<stdio.h>
using namespace std;
int distance(int arr[],int n,int x,int y){
    int min=INT_MAX;
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(((x==arr[i]  && y==arr[j]) || (y==arr[i] && x==arr[j] )) && min>abs(i-j)){
                min=abs(i-j);
            }
        }
    }
    return min;
}
int main(){
    int arr[]={3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=3;
    int y=6;
    cout<<"The distance between"<<x<<" and "<<y<<" is "<<distance(arr,n,x,y);
    return 0;
}