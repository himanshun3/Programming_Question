#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define V 9
int minimumsolution(int dist[],bool splset[]){
    int min=INT_MAX;
    int min_index;
    for(int i=0;i<V;i++){
        if(splset[i]==false && dist[i]<=min){
            min=dist[i];
            min_index=i;
        }
    }
    return min_index;
}
void printsolution(int dist[],int n){
    for(int i=0;i<V;i++){
        cout<<i<<" "<<dist[i]<<endl;
    }
}
void dijkstra(int graph[V][V],int src){
    int dist[V];
    bool splset[V];
    for(int i=0;i<V;i++){
        dist[i]=INT_MAX;
        splset[i]=false;
    }
    dist[src]=0;
    for(int count=0;count<V-1;count++){
        int u=minimumsolution(dist,splset);
        splset[u]=true;
        for(int v=0;v<V;v++){
            if(!splset[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v]){
                dist[v]=dist[u]+graph[u][v];
            }
        }
    }
    printsolution(dist,V);
}
int main(){
    int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 14, 10, 0, 2, 0, 0},
                      {0, 0, 0, 0, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };
    dijkstra(graph,0);
    return 0;
}