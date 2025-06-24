// //using globle variable code
// #include<iostream>
// #include<vector>
// #include<list>
// #include<unordered_set>
// using namespace std;
// vector<list<int >>graph;
// unordered_set<int>visited;
// vector<vector<int >> result;
// void add_edge(int src,int dest,bool bi_dir=true){
//     graph[src].push_back(dest);
//     if(bi_dir){
//         graph[dest].push_back(src);
//     }
// }
// void dfs(int curr,int end,vector<int>&path){
//     if(curr==end) {
//         path.push_back(curr);
//         result.push_back(path);
//         path.pop_back();
//         return ;
//     }
//     visited.insert(curr);//mark visited
//     path.push_back(curr);
//     for(auto neighbour :graph[curr]){
//         if(not visited.count(neighbour)){
//             dfs(neighbour,end,path);

//         }
//     }
//     path.pop_back();
//     visited.erase(curr);
//     return ;
// }

// void allpath(int src,int dest){
//     vector<int>v;
//     visited.clear();
//     dfs(src,dest,v);
// }
// int main() {
//     int v;
//     cout<<"interbett the size of vertex :";
//     cin>>v;
//     graph.resize(v);
//     int e;
//     cout<<"enter the size of edges :";
//     cin>>e;
//     while(e--){
//         int s,d;
//         cin>>s>>d;
//         add_edge(s,d);
//     }
//     int x,y;
//     cin>>x>>y;
//     allpath(x,y);
//     cout<<result.size()<<endl;
//     for(auto path :result){
//         for(auto el: path){
//             cout<<el<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// //without using globle variable

#include <iostream>
#include <vector>
using namespace std;

void dfs(int curr, int end, const vector<vector<int>>& graph, vector<bool>& visited,
         vector<int>& path, vector<vector<int>>& result) {
    
    path.push_back(curr);
    visited[curr] = true;

    if (curr == end) {
        result.push_back(path);
    } else {
        for (int neighbor : graph[curr]) {
            if (!visited[neighbor]) {
                dfs(neighbor, end, graph, visited, path, result);
            }
        }
    }

    path.pop_back();
    visited[curr] = false;
}

vector<vector<int>> findAllPaths(int v, const vector<pair<int, int>>& edges, int src, int dest) {
    vector<vector<int>> graph(v);
    for (const auto& edge : edges) {
        int u = edge.first;
        int w = edge.second;
        graph[u].push_back(w);
        graph[w].push_back(u); // undirected
    }
    

    vector<vector<int>> result;
    vector<int> path;
    vector<bool> visited(v, false);

    dfs(src, dest, graph, visited, path, result);
    return result;
}

int main() {
    int v, e;
    cout << "Enter number of vertices: ";
    cin >> v;

    cout << "Enter number of edges: ";
    cin >> e;

    vector<pair<int, int>> edges;
    for (int i = 0; i < e; ++i) {
        int u, w;
        cin >> u >> w;
        edges.push_back({u, w});
    }

    int src, dest;
    cout << "Enter source and destination: ";
    cin >> src >> dest;

    vector<vector<int>> paths = findAllPaths(v, edges, src, dest);

    cout << "Total Paths: " << paths.size() << "\n";
    for (const auto& path : paths) {
        for (int node : path) cout << node << " ";
        cout << "\n";
    }

    return 0;
}
