#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void dronservicesscheduler(int arr[][2],int m,int n){
    vector<vector<int>>adj(n+1);
    for(int i=0;i<m;i++){
        int u=arr[i][0];
        int v=arr[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>side(n+1,-1);
    bool is_bipartite=true;
    queue<int>q;

    for(int i=1;i<=n;i++){
        if(side[i]==-1){
            q.push(i);
            side[i]=0;

            while(!q.empty()){
                int u=q.front();
                q.pop();

                for(int v: adj[u]){
                    if(side[v]==-1){
                        side[v]=1-side[u];
                        q.push(v);
                    } else if(side[v]==side[u]){
                        is_bipartite=false;
                        break;
                    }
                }
                if(!is_bipartite) break;
            }
        }
        if(!is_bipartite) break;
    }
    if(!is_bipartite){
        cout<<"Not a complete day\n";
    } else{
        cout<<"complete day\n";
    }
}
int main() {
    
    int t;
    cin>>t;
    int n,m;

    for(int j=0;j<t;j++){
        cin>>n>>m;
        int arr[m][2];
        for(int i=0;i<m;i++){
            cin>>arr[i][0]>>arr[i][1];
        }
        dronservicesscheduler(arr,m,n);
    }
    return 0;
}