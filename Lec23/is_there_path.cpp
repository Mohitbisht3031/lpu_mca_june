#include<bits/stdc++.h>

using namespace std;

bool dfs(vector<vector<int>>&g,int v,int src,int des,vector<bool>&vis){

    if(src == des)return 1;
    vis[src] = 1;
    for(int i = 0;i<v;i++){
        if(g[src][i] == 1 && !vis[i]){
            if(dfs(g,v,i,des,vis))return 1;
        }
    }

    return 0;
}

bool path_present(vector<vector<int>>&g,int v,int v1,int v2){

    vector<bool>visted(v,0);

    return dfs(g,v,v1,v2,visted);
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

    if(path_present(graph,v,0,3)){
        cout<<"path is present b/w the nodes"<<endl;
    }else{
        cout<<"path is not present b/w"<<endl;
    }

    return 0;
}
