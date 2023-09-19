class Solution{
  public:
    int solve(int idx,int len,int price[], int n, vector<vector<int>> &dp){
        if(idx == 0){
            return len*price[0];
        }
        if(dp[idx][len] != -1)
            return dp[idx][len];
        int notTake = 0 + solve(idx-1,len,price,n,dp);
        int take = INT_MIN;
        int rodLen = idx + 1;
        if(rodLen <= len)
            take = price[idx] + solve(idx,len-rodLen,price,n,dp);
        return dp[idx][len] = max(notTake,take);
    }
    int cutRod(int price[], int n) {
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return solve(n-1,n,price,n,dp);
    }
};
