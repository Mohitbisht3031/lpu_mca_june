#include<bits/stdc++.h>

using namespace std;

bool dfs(vector<vector<int>>&g,int src,int v,int parent,vector<bool>&vis){
    vis[src] = 1;

    for(int i = 0;i<v;i++){
        if(g[src][i]){
            if(vis[i] && parent != i)return 1;
            else if(!vis[i]){
                if(dfs(g,i,v,src,vis))return 1;
            }
        }
    }

    return 0;
}

bool detect_cycle(vector<vector<int>>&g,int v){

    vector<bool>vis(v,0);
    for(int i = 0;i<v;i++){
        if(!vis[i]){
            if(dfs(g,i,v,-1,vis))return 1;
        }
    }
    return 0;
}

int main(){

    int v,e;

    cin>>v>>e;
    vector<vector<int>>graph(v,vector<int>(v,0));

    for(int i = 0;i<e;i++){
        int s,d;
        cin>>s>>d;

        graph[s][d] = 1;
        graph[d][s] = 1;
    }

    if(detect_cycle(graph,v)){
        cout<<"Cycle is present in the graph.!"<<endl;
    }else cout<<"No cycle is not present in the graph"<<endl;

    return 0;
}
