#include<iostream>
#include<vector>
using namespace std;

int find(vector<int>&parent,int x){
    if(parent[x]==x) return x;
    return parent[x]=find(parent,parent[x]);
}
void Union(vector<int>&parent,vector<int>&rank,int a,int b){
    a=find(parent,a);
    b=find(parent,b);
    // if(rank[a]>=rank[b]){
    //     rank[a]++;
    //     parent[a]=b;
    // } else{
    //     rank[b]++;
    //     parent[b]=a;
    // }
    if(a==b) return;
    if(rank[a]>rank[b]) {
        parent[b]=a;
    }
    else if(rank[a]<rank[b]) {
        parent[a] = b;
    }
    else{
        parent[b] = a;
        rank[a]++;
    }

}
int main(){
    int n,m;
    cin>>n>>m;
    //n ->no of element and m no of queries
    vector<int>parent(n+1);
    vector<int>rank(n+1,0);
    for(int i=0;i<=n;i++){
        parent[i]=i;
    }
    while(m--){
        string str;
        cin>>str;
        if(str=="union"){
            int x,y;
            cin>>x>>y;
            Union(parent,rank,x,y);
        } else{
            int x;
            cin>>x;
            cout<<find(parent,x)<<"\n";
        }
    }

    return 0;
}