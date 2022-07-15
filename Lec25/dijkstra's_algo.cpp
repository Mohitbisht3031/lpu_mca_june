#include<bits/stdc++.h>

using namespace std;

int Dijkstra_algo(vector<vector<int>>&g,int v,int src,int des){

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    pq.push({0,src});
    vector<bool>vis(v,0);
    vis[src] = 1;
    vector<int>dis(v,INT_MAX);
    dis[src] = 0;
    while(!pq.empty()){
        pair<int,int>t = pq.top();
        pq.pop();

        int node = t.second;
        int wt = t.first;
        vis[node] = 1;
        for(int i = 0;i<v;i++){
            if(g[node][i] != 0 && !vis[i]){
                int nwt = dis[node]+g[src][i];
                if(nwt < dis[i]){
                    dis[i] = nwt;
                    pq.push({nwt,i});
                }
            }
        }
    }

    return (dis[des] == INT_MAX ? -1 : dis[des]);
}

int main(){

    int v,e;

    cin>>v>>e;
    vector<vector<int>>graph(v,vector<int>(v,0));

    for(int i = 0;i<e;i++){
        int s,d,w;
        cin>>s>>d>>w;

        graph[s][d] = w;
        graph[d][s] = w;
    }

    cout<<"distance between the src and des is "<<Dijkstra_algo(graph,v,1,5)<<endl;

    return 0;
}
