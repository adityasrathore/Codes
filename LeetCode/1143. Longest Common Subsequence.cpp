NEW DP
class Solution {
public:
    int solve(int idx1,int idx2,string &text1, string &text2,vector<vector<int>> &dp){
        if(idx1<0 || idx2<0)
            return 0;
        if(dp[idx1][idx2] != -1)
            return dp[idx1][idx2];
        if(text1[idx1] == text2[idx2])
            dp[idx1][idx2] = 1+solve(idx1-1,idx2-1,text1,text2,dp);
        else
            dp[idx1][idx2] = max(solve(idx1,idx2-1,text1,text2,dp),
                                 solve(idx1-1,idx2,text1,text2,dp));
        return dp[idx1][idx2];
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(m-1,n-1,text1,text2,dp);
    }
};

-----------------------------------------------------
OLD
class Solution {
public:
    int t[1001][1001];
    int lcs(string &text1, string &text2,int m,int n){
        if(n==0 || m==0)
            return 0;
        if(t[m][n]!=-1)
            return t[m][n];
        
        if(text1[m-1]==text2[n-1])
            return t[m][n]=1+lcs(text1,text2,m-1,n-1);
        else
            return t[m][n]=max(lcs(text1,text2,m,n-1),lcs(text1,text2,m-1,n));
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(t,-1,sizeof(t));
        int m=text1.length();
        int n=text2.length();
        return lcs(text1,text2,m,n);
    }
};

class Solution {
public:
    int solve(int m,int n,string &s1, string &s2,vector<vector<int>> &dp){
        if(m==0 || n==0)
            return 0;
        if(dp[m][n]!=-1)
            return dp[m][n];
        if(s1[m-1]==s2[n-1])
            return dp[m][n]=1+solve(m-1,n-1,s1,s2,dp);
        
        return dp[m][n]=max(solve(m-1,n,s1,s2,dp),solve(m,n-1,s1,s2,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        vector <vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(m,n,text1,text2,dp);
    }
};

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        vector<vector <int>> dp(m+1,vector<int>(n+1));
        for(int i=0;i<=m;i++)
            dp[i][0]=0;
        for(int j=0;j<=n;j++)
            dp[0][j]=0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(text1[i-1]==text2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[m][n];
    }
};

class Solution {
public:
  int t[1001][1001];
  int lcsbottomup(string &x,string &y,int m,int n){
    for(int i=1;i<m+1;i++)
        for(int j=1;j<n+1;j++)
            if(x[i-1]==y[j-1])
                t[i][j]=1+t[i-1][j-1];
            else    
                t[i][j]=max(t[i-1][j],t[i][j-1]);

    return t[m][n];
}
    int longestCommonSubsequence(string text1, string text2) {
        memset(t,0,sizeof(t));
        int m=text1.length();
        int n=text2.length();
        return lcsbottomup(text1,text2,m,n);
    }
};





