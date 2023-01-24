class Solution {
public:
    pair <int,int> coordinate(int curr,int n){
        int r=n-((curr-1)/n) -1;
        int c=(curr-1)%n;
        if(r%2==n%2)
            return {r,n-c-1};
        else
            return {r,c};
    }
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        int moves=0;
        queue <int> q;
        vector <vector<bool>> visited(n*n+1,vector <bool> (n*n+1,false));
        q.push(1);
        visited[n-1][0]=true;
        while(!q.empty()){
            int size=q.size();
            // cout<<size<<endl;
            for(int i=0;i<size;i++){
                int x=q.front();
                q.pop();
                if(x==n*n)
                    return moves;
                for(int j=1;j<=6;j++){
                    if(j+x>n*n)
                        break;
                    pair <int,int> p=coordinate(j+x,n);
                    int row=p.first;
                    int col=p.second;
                    if(visited[row][col]==true)
                        continue;
                    visited[row][col]=true;
                    if(board[row][col]==-1)
                        q.push(j+x);
                    else
                        q.push(board[row][col]);
                }
            }
            moves++;
        }
        return -1;
    }
};
