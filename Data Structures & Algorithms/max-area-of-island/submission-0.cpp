class Solution {
public:
    void dfs(int row, int col,vector<vector<int>>& grid, vector<vector<bool>>& visited , int&  count){
        int r[]={1,0,-1,0};
        int c[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nr=row+r[i];
            int nc=col+c[i];
            if(nr>=grid.size()||nc>=grid[0].size()||nr<0||nc<0)
            continue;
            if(!visited[nr][nc]&&grid[nr][nc]==1){
                count++;
                visited[nr][nc]=true;
                dfs(nr,nc,grid,visited, count);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        vector<vector<bool>> visited(rows,vector<bool>(cols,false));
        // int r={1,0,-1,0};
        // int c={0,1,0,-1};
        int count=0;
        int ans=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                count=0;
                if(!visited[i][j]&&grid[i][j]==1){
                    visited[i][j]=true;
                    count=1;
                    dfs(i,j,grid,visited,count);
                    ans=max(ans,count);

                }
            }
        }
        return ans;
        
    }
};
