class Solution
{
    int m=1000000007;
    public:
    int solve(int n,vector <int> &dp){
        if(n<=1)
            return n;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=(solve(n-1,dp)+solve(n-2,dp))%m;
    }
    int countWays(int n){
        n=n+2;
        vector <int> dp(n,-1);
        return solve(n-1,dp);
    }
};
