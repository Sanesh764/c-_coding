
//undirected unweighted graph
// #include<iostream>
// #include<list>
// #include<vector>
// using namespace std;

// class Graph{
//     int V;
//     list<int> *L;
// public:
//     Graph(int V){
//         this->V=V;
//         L=new list<int> [V];
//     }
//     void addEdge(int U,int V){ //u---v
//         L[U].push_back(V);
//         L[V].push_back(U);
//     }
//     void print(){
//         for(int u=0;u<V;u++){
//             list<int>neighbour=L[u];
//             cout<<u<<" : ";
//             for(int v: neighbour){
//                 cout<<v<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };
// int main() {
//     Graph graph(5);//5 is the size of graph
//     //undirected
//     graph.addEdge(0,1);
//     graph.addEdge(1,2);
//     graph.addEdge(1,3);
//     graph.addEdge(2,3);
//     graph.addEdge(2,4);
//     graph.print();
//     return 0;
// }


#include<iostream>
#include<vector>
#include<list>
using namespace std;
void add_edge(vector<list<int>>&graph,int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void display(vector<list<int>>&graph){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele:graph[i]){
            cout<<"("<<ele<<")"<<"->";
        }
        cout<<endl;
    }
}
int main() {
    int v;//no of vertex;
    cout<<"enter no of vertex :";
    cin>>v;
    vector<list<int>>graph(v);
    int e;
    cout<<"enter no of edges :";
    cin>>e;
    while(e--){
        int s,d;//source,destination
        cout<<"enter source and destination :";
        cin>>s>>d;
        add_edge(graph,s,d,true);
    }
    display(graph);
    return 0;
}