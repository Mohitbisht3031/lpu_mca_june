#include<bits/stdc++.h>

using namespace std;

int dfs(vector<vector<int>>&g,int i,int j){
        
        g[i][j] = 0;
        int c = 1;
        int dx[] = {0,0,1,-1};
        int dy[] = {1,-1,0,0};
        
        for(int k =0;k<4;k++){
            int nx = i+dx[k];
            int ny = j+dy[k];
            
            if(nx >= g.size() || nx < 0 || ny >= g[0].size() || nx < 0 || g[nx][ny] == 0)continue;
            
            c+=dfs(g,nx,ny);
            
        }
        
        return c;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int maxi = 0;
        
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(grid[i][j] == 1){
                    int ans = dfs(grid,i,j);
                    maxi = max(maxi,ans);
                }
            }
        }
        
        return maxi;
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

    return 0;
}
