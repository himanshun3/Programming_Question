#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    vector<int> *adj;
    public:
    Graph(int V){
        this->V=V;
        adj=new vector<int>[V];
    }
    void addedge(int v,int w){
        adj[v].push_back(w);
    }
    void BST(int s){
        bool *visited=new bool[V];
        for(int i=0;i<V;i++){
            visited[i]=false;
        }
        queue<int>q;
        visited[s]=true;
        q.push(s);
        vector<int>::iterator it;
        while(!q.empty()){
            s=q.front();
            cout<<s<<" ";
            q.pop();
            for(it=adj[s].begin();it!=adj[s].end();it++){
                if(!visited[*it]){
                    visited[*it]=true;
                    q.push(*it);
                }
            }
        }
    }
};
int main(){
    Graph g(4);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,2);
    g.addedge(2,0);
    g.addedge(2,3);
    g.addedge(3,3);
    cout<<"The breadth first traversal is ";
    g.BST(2);
    return 0;
}