class Solution {
public:
    bool isSafe(int row,int col,int n,vector<string> &board){
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
    void solve(int col,int n,vector<string> &board,int &count){
        if(col==n){
            count++;
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,n,board)==true){
                board[row][col]='Q';
                solve(col+1,n,board,count);
                board[row][col]='.';
            }
        }
    }
    int totalNQueens(int n) {
        int count=0;
        vector <string> board(n);
        string s(n,'.');
        solve(0,n,board,count);
        return count;
    }
};
