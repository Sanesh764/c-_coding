#include<iostream>
#include<vector>
using namespace std;

int find(vector<int>&parent,int x){
    //tc=(lon*n)
    if(parent[x]==x) return x;
    return parent[x]=find(parent,parent[x]);
}
bool Union(vector<int>&parent,vector<int>&rank,int a,int b){
    a=find(parent,a);
    b=find(parent,b);
    if(a==b) return true;
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
    return false;

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
        int x,y;
        cin>>x>>y;
        bool b= Union(parent,rank,x,y);
        if(b==true) cout<<"Cycle detected\n";
    }
    //tc=e(log*v)

    return 0;
}