class Solution {
public:
    int dir[4][2]={{1,0},{-1,0},{0,-1},{0,1}};
    // int bfs(int row, int col,vector<vector<int>>& grid ){
    //     queue<pair<int,int>> q;
    //     int time=0;
    //     q.push({row, col});
    //     while(!q.empty()){
    //         int n= q.size();
    //         while(n){
    //         int r=q.front().first;
    //         int c=q.front().second;
    //         q.pop();
    //         for(int i=0;i<4;i++){
    //             int nr=r+dir[i][0];
    //             int nc=c+dir[i][1];
    //             if(nr<0||nc<0||nr>=grid.size()||nc>=grid[0].size())
    //             continue;
    //             if(grid[nr][nc]==1)
    //             {
    //                 grid[nr][nc]=0;
    //                 q.push({nr,nc});
    //             }
    //         }
    //         n--;

    //         }  
    //         time++;      
    //     }
    // return time;
    // }
    int orangesRotting(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int time=0;
        queue<pair<int,int>> q;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    
                }
            }
        }
        while(!q.empty()){
            int n= q.size();
            while(n){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+dir[i][0];
                int nc=c+dir[i][1];
                if(nr<0||nc<0||nr>=grid.size()||nc>=grid[0].size())
                continue;
                if(grid[nr][nc]==1)
                {
                    grid[nr][nc]=2;
                    q.push({nr,nc});
                }
            }
            n--;

            }  
            time++;      
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    return -1;
                    
                }
            }
        }
        if(time==0)
        return 0;
        return time-1;
    }
};
