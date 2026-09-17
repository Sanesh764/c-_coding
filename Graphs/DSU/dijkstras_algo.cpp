#include<bits/stdc++.h>
#define ll long long int
#define pp pair<int,int>
using namespace std;

vector<list<pp>>graph;
void add_edge(int u,int v,int wt,bool bidir=true){
    graph[u].push_back({v,wt});
    if(bidir){
        graph[v].push_back({u,wt});
    }
}

unordered_map<int,int> djkstra(int src,int n){
    priority_queue<pp,vector<pp>,greater<pp> >pq;//{wt,node}
    unordered_set<int>vis;
    vector<int>via(n+1);
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++){
        mp[i]=INT_MAX;
    }
    pq.push({0,src});
    mp[src]=0;

    while(!pq.empty()){
        pp curr=pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        pq.pop();
        for (auto neighbour:graph[curr.second]){
            if(!vis.count(neighbour.first) && mp[neighbour.first]>mp[curr.second]+neighbour.second){
                pq.push({mp[curr.second]+neighbour.second,neighbour.first});
                via[neighbour.first]=curr.second;
                mp[neighbour.first]=mp[curr.second]+neighbour.second;
            }
        }
    }
    return mp; 
}

int main() {
    int n,m;
    cin>>n>>m;
    graph.resize(n+1,list<pp>());
    while(m--){
        int u,v,wt;
        cin>>u>>v>>wt;
        add_edge(u,v,wt);
    }
    int src;
    cin>>src;
    unordered_map<int,int> sp=djkstra(src,n);
    int dest;
    cin>>dest;
    cout<<sp[dest]<<"\n";
    
    return 0;
}

/*
6 9
1 2 4
1 3 2
2 3 1
2 4 5
3 4 8
3 5 10
4 5 2
4 6 6
5 6 3
1
6
*/