#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<pair<int ,int>>> graph;
int v;//no of vertices
void add_edge(int src,int dest,int wt,bool bi_dir=true){
    graph[src].push_back({dest,wt});    
    if(bi_dir==true){
        graph[dest].push_back({src,wt});
    }
}

void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto el : graph[i]){
            cout<<"("<<el.first<<"  "<<el.second<<")";
        }
        cout<<endl;
    }
}
int main() {
    cout<<"enter your size of vertex: ";
    cin>>v;
    graph.resize(v,list<pair<int,int>>());
    int e;
    cout<<"enter your size of edges :";
    cin>>e;
    while (e--){
        int s,d,wt;
        cout<<"enter source and destination and weight :";
        cin>>s>>d>>wt;
        add_edge(s,d,wt);
    }
    display();
    return 0;
}