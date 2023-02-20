class Solution {
public:
    bool isSafe(int row,int col,vector<string> &board,int n){
        int rowTemp=row;
        int colTemp=col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q')
                return false;
            row--;
            col--;
        }
        row=rowTemp;
        col=colTemp;
        while(col>=0){
            if(board[row][col]=='Q')
                return false;
            col--;
        }
        row=rowTemp;
        col=colTemp;
        while(row<n && col>=0){
            if(board[row][col]=='Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int col,int n,vector<string> &board,vector<vector<string>> &v){
        if(col==n){
            v.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)==true){
                board[row][col]='Q';
                solve(col+1,n,board,v);
                board[row][col]='.'; //Backtracking Step
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> v;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
            board[i]=s;
        solve(0,n,board,v);
        return v;
    }
};
