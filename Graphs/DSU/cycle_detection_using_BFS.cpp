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

bool bfs(int src){
    unordered_set<int>vis;
    queue<int>qu;
    vector<int>par(v,-1);
    qu.push(src);
    vis.insert(src);
    while(!qu.empty()){
        int curr=qu.front();
        qu.pop();
        for(auto neighbour :graph[curr]){
            if(vis.count(neighbour.first) && par[curr]!=neighbour.first) return true;
            if(!vis.count(neighbour.first)){
                vis.insert(neighbour.first);
                par[neighbour.first]=curr;
                qu.push(neighbour.first);
            }
        }
    }
    return false;
}


bool has_cycle(){
    unordered_set<int>visited;
    bool result=false;
    for(int i=0;i<v;i++){
        if(!visited.count(i)){
            result=bfs(i);
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