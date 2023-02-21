class Solution {
public:
    bool isSafe(int row,int col,char &c,vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            if(board[i][col]==c) //Checking Row
                return false;
            if(board[row][i]==c) //Checking Column
                return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c) //Checking 3*3 sub-matrix for unique number betweeen 1-9
                return false;
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isSafe(i,j,c,board)==true){
                            board[i][j]=c;
                            if(solve(board)==true)
                                return true;
                            else
                                board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);        
    }
};
