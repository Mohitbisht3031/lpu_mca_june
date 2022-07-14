#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>>&g,int v,int src,vector<bool>&vis){
    vis[src] = 1;
    for(int i = 0;i<v;i++){
        if(g[src][i] == 1 && !vis[i]){
            dfs(g,v,i,vis);
        }
    }

    return;
}

int connected_comp(vector<vector<int>>&g,int v){
    vector<bool>visited(v,0);

    int c = 0;
    for(int i = 0;i<v;i++){
        if(!visited[i]){
            c++;
            dfs(g,v,i,visited);
        }
    }

    return c;
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

    cout<<"There are "<<connected_comp(graph,v)<< " connected comp. in the graph"<<endl;

    return 0;
}
