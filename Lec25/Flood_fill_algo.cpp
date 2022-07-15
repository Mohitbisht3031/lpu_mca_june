#include<bits/stdc++.h>

using namespace std;

    void dfs(vector<vector<int>>&g,int i,int j,int nc,int oc){
        
        g[i][j] = nc;
        int r = g.size();
        int c = g[0].size();
        
        int dx[] = {0,0,-1,1};
        int dy[] = {1,-1,0,0};
        
        for(int k = 0;k<4;k++){
            int nx = i+dx[k];
            int ny = j+dy[k];
            
            if(nx >= r || nx < 0 || ny >= c || ny < 0 || g[nx][ny] != oc)continue;
            
            dfs(g,nx,ny,nc,oc);
            
        }
        return;
    }
    
    
   vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       
       
       dfs(image,sr,sc,newColor,image[sr][sc]);
       
       return image;
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

    return 0;
}
