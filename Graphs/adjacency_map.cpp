// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;

//using bloble variable
// vector<unordered_map<int,int> >graph;
// int v;//no of vertices
// void add_edge(int src,int dest,int wt, bool bi_dir=true){
//     graph[src][dest]=wt;    
//     if(bi_dir){
//         graph[dest][src]=wt;
//     }
// }

// void display(){
//     for(int i=0;i<graph.size();i++){
//         cout<<i<<" -> ";
//         for(auto el : graph[i]){
//             cout << "(" << el.first << ", " << el.second << ") ";
//         }
//         cout<<endl;
//     }
// }
// int main() {
//     cout<<"enter your size of vertex: ";
//     cin>>v;
//     graph.resize(v);//resize the graph into v
//     int e;
//     cout<<"enter your size of edges :";
//     cin>>e;
//     while (e--){
//         int s,d,wt;
//         cout<<"enter source and destination and weight : ";
//         cin>>s>>d>>wt;
//         add_edge(s,d,wt);
//     }
//     display();
//     return 0;
// }


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void add_edge(vector<unordered_map<int,int> >&graph,int src,int dest,int wt, bool bi_dir=true){
    graph[src][dest]=wt;    
    if(bi_dir){
        graph[dest][src]=wt;
    }
}

void display(vector<unordered_map<int,int> >&graph){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto el : graph[i]){
            cout << "(" << el.first << ", " << el.second << ") ";
        }
        cout<<endl;
    }
}
int main() {
    int v;//no of vertices
    cout<<"enter your size of vertex: ";
    cin>>v;
    vector<unordered_map<int,int> >graph(v);
    graph.resize(v);//resize the graph into v
    int e;
    cout<<"enter your size of edges :";
    cin>>e;
    while (e--){
        int s,d,wt;
        cout<<"enter source and destination and weight : ";
        cin>>s>>d>>wt;
        add_edge(graph,s,d,wt);
    }
    display(graph);
    return 0;
}
