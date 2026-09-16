#include<bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
int v;//no of vertices

void add_edge(int a,int b,bool bidir=true){
    graph[a].push_back(b);
    if(bidir){
        graph[b].push_back(a);
    }
}

void topoBFS(){
    //kans algo
    vector<int>indegree(v,0);
    for(int i=0;i<v;i++){
        //i----->neighboyr
        for(auto neighbour:graph[i]){
            indegree[neighbour]++;
        }
    }
    queue<int>qu;
    unordered_set<int>vis;

    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            qu.push(i);
            vis.insert(i);
        }
    }
    while(!qu.empty()){
        int node=qu.front();
        cout<<node<<" ";
        qu.pop();
        for(auto neighbour:graph[node]){
            if(!vis.count(neighbour)==0){
                indegree[neighbour]--;
                qu.push(neighbour);
                vis.insert(neighbour);
            }
        }
    }
}

int main() {
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int x,y;
        cin>>x>>y;
        add_edge(x,y,false);
    }
    topoBFS();
    return 0;
}