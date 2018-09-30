#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> arr[],int u,int v){
    arr[u].push_back(v);
    arr[v].push_back(u);
}
void print(vector<int>arr[],int V){
    for(int v=0;v<V;v++){
        cout<<"Adjacency list for "<<v<<" is ";
        for(auto it: arr[v]){
            cout<<" -> "<<it;
        }
        cout<<endl;
    }
}
int main(){
    int V=5;
    vector<int>arr[V];
    addedge(arr,0,1);
    addedge(arr,0,4);
    addedge(arr,1,2);
    addedge(arr,1,3);
    print(arr,V);
    return 0;
}