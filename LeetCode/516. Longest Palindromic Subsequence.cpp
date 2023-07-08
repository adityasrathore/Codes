class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        string t = s;
        reverse(s.begin(),s.end());
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1] == t[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[n][n];
    }
};

-----------------------------------------


class Solution {
public:
    int t[1001][1001];
    int LPS(string &x,int m){
    string y=x;
    reverse(y.begin(),y.end());
    for(int i=0;i<m+1;i++)
        for(int j=0;j<m+1;j++)
            if(i==0||j==0)
                t[i][j]=0;

    for(int i=1;i<m+1;i++)
        for(int j=1;j<m+1;j++)
            if(x[i-1]==y[j-1])
                t[i][j]=1+t[i-1][j-1];
            else    
                t[i][j]=max(t[i-1][j],t[i][j-1]);

    return t[m][m];
}
    int longestPalindromeSubseq(string s) {
        return LPS(s,s.length());
    }
};
