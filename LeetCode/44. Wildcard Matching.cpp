class Solution {
public:
    bool solve(int i,int j,string &p,string &s,vector<vector<int>> &dp){
        if(i == 0 && j==0)
            return true;
        if(i == 0 && j > 0)
            return false;
        if(i > 0 && j == 0){
            for(int k=i;k>0;k--)
                if(p[k-1] != '*')
                    return false;
            return true;
        }
        if(dp[i][j] != -1)
            return dp[i][j];
        if(p[i-1] == s[j-1] || p[i-1] == '?')
            return dp[i][j] = solve(i-1,j-1,p,s,dp);
        if(p[i-1] == '*')
            return dp[i][j] = solve(i-1,j,p,s,dp) || solve(i,j-1,p,s,dp);
        return dp[i][j] = false;
    }
    bool isMatch(string s, string p) {
        int m = p.size();
        int n = s.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(m,n,p,s,dp);
    }
};
