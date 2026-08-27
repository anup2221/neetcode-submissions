class Solution {
public:
    int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    void dfs(int r, int c, vector<vector<char>>& board){
        for(int i=0;i<4;i++){
            int nr=r+dir[i][0];
            int nc=c+dir[i][1];
            if(nr<0||nc<0||nr>=board.size()||nc>=board[0].size())
            continue;
            if(board[nr][nc]=='O')
            {
                board[nr][nc]='s';
                dfs(nr,nc,board);
            }
        }

    } 
    void solve(vector<vector<char>>& board) {
        int r=board.size();
        int c=board[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==0||j==0||i==r-1||j==c-1){
                if(board[i][j]=='O'){
                    board[i][j]='s';
                    dfs(i,j,board);
                }
                }
                        
            }

        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                if(board[i][j]=='s')
                board[i][j]='O';
            }

        }
        
    }
};
