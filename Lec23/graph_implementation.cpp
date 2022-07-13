#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>>&g,int s,vector<bool>&vis,int v){

    vis[s] = 1;
    cout<<s<<endl;
    for(int i = 0;i<v;i++){
        if(g[s][i] && !vis[i]){
            dfs(g,i,vis,v);
        }
    }

    return;
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

    vector<bool>visited(v,0);

    for(int i = 0;i<v;i++){
        if(!visited[i]){
            dfs(graph,i,visited,v);
        }
    }

    return 0;
}
