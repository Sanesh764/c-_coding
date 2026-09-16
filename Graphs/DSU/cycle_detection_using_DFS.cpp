#include<bits/stdc++.h>

using namespace std;
int v;
vector<unordered_map<int,int> >graph;
void add_edge(vector<unordered_map<int,int> >&graph,int src,int dest,int wt, bool bi_dir=true){
    graph[src][dest]=wt;    
    if(bi_dir){
        graph[dest][src]=wt;
    }
}

bool dfs(int src,int parent,unordered_set<int>&vis){
    vis.insert(src);
    for( auto neighbour : graph[src]){
        if(vis.count(neighbour.first) && neighbour.first!=parent){
            return false;//cycle detected
        }
        if(!vis.count(neighbour.first)){
           bool res= dfs(neighbour.first,src,vis);
           if(res==true) return true;
        }
    }
    return false;
}

bool has_cycle(){
    unordered_set<int>visited;
    bool result=false;
    for(int i=0;i<v;i++){
        if(!visited.count(i)){
            result=dfs(i,-1,visited);
            if(result==true) return  true;
        }
    }
    return false;
}

int main() {
    cin>>v;
    graph.resize(v);//resize the graph into v
    int e;
    cin>>e;
    while (e--){
        int s,d,wt;
        cin>>s>>d>>wt;
        add_edge(graph,s,d,wt);
    }
    cout<<has_cycle();
    return 0;
}