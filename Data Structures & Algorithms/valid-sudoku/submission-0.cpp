class Solution {
public:
    bool isValidRows(vector<vector<char>>& board){
        int rows=board.size();
        int col=board[0].size();
        for(int i=0;i<rows;i++){
            set<char> s;
            for(int j=0;j<col;j++){
                char ele=board[i][j];
                if(ele=='.')
                continue;
                if(s.find(ele)!=s.end())
                return false;
                s.insert(ele);
            }
        }
        return true;
    }
    bool isValidcols(vector<vector<char>>& board){
        int rows=board.size();
        int cols=board[0].size();
        for(int i=0;i<cols;i++){
            set<char> s;
            for(int j=0;j<rows;j++){
                char ele=board[j][i];
                if(ele=='.')
                continue;
                if(s.find(ele)!=s.end())
                return false;
                s.insert(ele);
            }
        }
        return true;
    }
    bool isValidmat(vector<vector<char>>& board){
        int rows=board.size();
        int col=board[0].size();
        int start_i=0,start_j=0;
        int count=9;
        while(count){
            set<char> s;
            for(int i=start_i;i<start_i+3;i++){
                for(int j=start_j;j<start_j+3;j++){
                char ele=board[i][j];
                if(ele=='.')
                continue;
                if(s.find(ele)!=s.end())
                return false;
                s.insert(ele);
                }
            }
            count--;
            // start_i+=3;
            start_j+=3;
            if(start_j>=9){
                start_i+=3;
                start_j=0;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
      return  isValidRows(board)&&isValidcols(board)&&isValidmat(board);
        
    }
};
