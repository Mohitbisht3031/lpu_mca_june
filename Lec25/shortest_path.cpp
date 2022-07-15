#include<bits/stdc++.h>

using namespace std;

int shortest_path(vector<vector<int>>&g,int v,int src,int des){

    queue<pair<int,int>>q;
    q.push({src,0});
    vector<bool>vis(v,0);
    vis[src] = 1;
    while(!q.empty()){
        pair<int,int>f = q.front();
        q.pop();

        int node = f.first;
        int d = f.second;
        if(node == des)return d;

        for(int i = 0;i<v;i++){
            if(g[node][i] && !vis[i])q.push({i,d+1});
        }
    }

    return -1;
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

    cout<<"distance between the src and des is "<<shortest_path(graph,v,1,5)<<endl;

    return 0;
}
