#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>>&g,int v,int src,int des,vector<bool>&vis,vector<int>&ans){

    vis[src] = 1;
    if(src == des){
        ans.push_back(src);
        return;
    }

    for(int i = 0;i<v;i++){
        if(g[src][i] == 1 && !vis[i]){ 
            dfs(g,v,i,des,vis,ans);
            if(ans.size() > 0){
                // ans.push_back(i);
                ans.push_back(src);
                return;
            }
        }
    }
    // if(ans.size() > 0)ans.push_back(src);
    return;
}

vector<int> path_search(vector<vector<int>>&g,int v,int v1,int v2){

    vector<bool>visited(v,0);
    vector<int>ans;
    dfs(g,v,v1,v2,visited,ans);
    return ans;
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

    vector<int>path = path_search(graph,v,1,5);

    for(int i = path.size()-1;i>=0;i--){
        if(i!=0)cout<<path[i]<<"->";
        else cout<<path[i];
    }

    cout<<endl;

    return 0;
}
