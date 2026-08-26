class Solution {
public:
    void dfs(int row, int col,vector<vector<char>>& grid, vector<vector<bool>>& visited ){
        int r[]={1,0,-1,0};
        int c[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nr=row+r[i];
            int nc=col+c[i];
            if(nr>=grid.size()||nc>=grid[0].size()||nr<0||nc<0)
            continue;
            if(!visited[nr][nc]&&grid[nr][nc]=='1'){
                visited[nr][nc]=true;
                dfs(nr,nc,grid,visited);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        vector<vector<bool>> visited(rows,vector<bool>(cols,false));
        // int r={1,0,-1,0};
        // int c={0,1,0,-1};
        int count=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(!visited[i][j]&&grid[i][j]=='1'){
                    visited[i][j]=true;
                    dfs(i,j,grid,visited);
                    count++;

                }
            }
        }
        return count;
    }
};
