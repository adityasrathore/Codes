class Solution {
public:
    int solve(int i,int j,string &word1, string &word2,vector<vector<int>> &dp){
        if(i == 0)
            return j;
        if(j == 0)
            return i;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(word1[i-1] == word2[j-1])
            return dp[i][j] = solve(i-1,j-1,word1,word2,dp);
        else
            return dp[i][j] = min(1 + solve(i-1,j-1,word1,word2,dp),
                                min(1 + solve(i,j-1,word1,word2,dp),
                                    1 + solve(i-1,j,word1,word2,dp)));
    }
            
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(m,n,word1,word2,dp);
    }
};


----------------------------------

class Solution {
public:
    int t[501][501];
    int solve(string s1,string s2,int i,int j){
        if(i<0)
            return j+1;
        if(j<0)
            return i+1;
        if(t[i][j]!=-1)
            return t[i][j];
        if(s1[i]==s2[j])
            return t[i][j]=solve(s1,s2,i-1,j-1);
        return t[i][j]=1+min(solve(s1,s2,i-1,j),
                             min(solve(s1,s2,i,j-1),
                                 solve(s1,s2,i-1,j-1)));
    }
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        memset(t,-1,sizeof(t));
        return solve(word1,word2,m-1,n-1);
    }
};
