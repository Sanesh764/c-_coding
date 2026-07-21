
#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int >>graph;
unordered_set<int>visited;
vector<int> result;

void add_edge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){ 
        graph[dest].push_back(src);
    }
}
bool dfs(int curr,int end){
    if(curr==end) return true;
    visited.insert(curr);//mark as visited
    for(auto neighbour: graph[curr]){
        //count sirf ye batata h ki perticular value exist karta h ya nhi agar karta h to return 1 else return 0
        if(!visited.count(neighbour)){//particular node if not visited then dfs call karo
            bool result=dfs(neighbour,end);
            if(result) return true;
        }
    }
    return false;
}

void anyPath(int src,int dest){
    visited.clear();
    if(dfs(src, dest))
        cout << "Path Exists\n";
    else
        cout << "No Path Exists\n";
}

int main() {
    int v;
    cout<<"interbett the size of vertex :";
    cin>>v;
    graph.resize(v);
    int e;
    cout<<"enter the size of edges :";
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int x,y;
    cin>>x>>y;
    anyPath(x,y);
    return 0;
}
/*
5
4
0 1
1 2
2 3
3 4
0 4
*/