class Solution {
public:
    int solve(int i,int j,vector <vector<int>> &t){
        if(i==0 && j==0)
            return 1;
        if(i<0 || j<0)
            return 0;
        if(t[i][j]!=-1)
            return t[i][j];
        int up=solve(i-1,j,t);
        int left=solve(i,j-1,t);
        return t[i][j]=left+up;
    }
    int uniquePaths(int m, int n) {
        vector <vector<int>> t(m,vector<int>(n,-1));
        return solve(m-1,n-1,t);
    }
};



class Solution {
public:
    int uniquePaths(int m, int n) {
        vector <vector<int>> t(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0)
                    t[i][j]=1;
                
                else{ 
                    int left=0,up=0;
                    if(i>0)
                        up=t[i-1][j];
                    if(j>0)
                        left=t[i][j-1];
                    t[i][j]=up+left;
               }
            }
        }
        return t[m-1][n-1];
    }
};
