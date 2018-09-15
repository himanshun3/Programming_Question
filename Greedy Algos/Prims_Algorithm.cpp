#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define V 5
int minimum(int dist[],bool mstset[]){
    int min=INT_MAX;
    int min_index;
    for(int i=0;i<V;i++){
        if(mstset[i]==false && dist[i]<=min){
            min=dist[i];
            min_index=i;
        }
    }
    return min_index;
}
void printsolution(int parent[],int n,int graph[V][V]){
    for(int i=1;i<V;i++){
        cout<<parent[i]<<"-"<<i<<"  "<<graph[i][parent[i]]<<endl;
    }
}
void prims_algo(int graph[V][V]){
    int dist[V];
    bool mstset[V];
    int parent[V];
    for(int i=0;i<V;i++){
        dist[i]=INT_MAX;
        mstset[i]=false;
    }
    dist[0]=0;
    parent[0]=-1;
    for(int count=0;count<V-1;count++){
        int u=minimum(dist,mstset);
        mstset[u]=true;
        for(int v=0;v<V;v++){
            if(!mstset[v] && graph[u][v] && graph[u][v]<dist[v]){
                parent[v]=u;
                dist[v]=graph[u][v];
            }
        }
    }
    printsolution(parent,V,graph);
}
int main(){
    int graph[V][V] = {{0, 2, 0, 6, 0},
                      {2, 0, 3, 8, 5},
                      {0, 3, 0, 0, 7},
                      {6, 8, 0, 0, 9},
                      {0, 5, 7, 9, 0},
                     };
    prims_algo(graph);
    return 0;
}