class Solution {
public:
    // int opt = 0 (buy)
    // int opt = 1 (sell)
    int solve(int idx,int opt,int k,vector<int>& prices){
        if(idx == prices.size())
            return 0;
        if(k == 0)
            return 0;
        int profit = 0;
        if(opt == 0)
            profit = max(-prices[idx]+solve(idx+1,1,k,prices),solve(idx+1,0,k,prices));
        else
            profit = max(prices[idx]+solve(idx+1,0,k-1,prices),solve(idx+1,1,k,prices));
        return profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        return solve(0,0,k,prices);
    }
};

class Solution {
public:
    // int opt = 0 (buy)
    // int opt = 1 (sell)
    int solve(int idx,int opt,int k,vector<int>& prices,vector<vector<vector<int>>> &dp){
        if(idx == prices.size())
            return 0;
        if(k == 0)
            return 0;
        if(dp[idx][opt][k] != -1)
            return dp[idx][opt][k];
        int profit = 0;
        if(opt == 0)
            profit = max(-prices[idx]+solve(idx+1,1,k,prices,dp),solve(idx+1,0,k,prices,dp));
        else
            profit = max(prices[idx]+solve(idx+1,0,k-1,prices,dp),solve(idx+1,1,k,prices,dp));
        
        return dp[idx][opt][k] = profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return solve(0,0,k,prices,dp);
    }
};

class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));
        
        for(int i=n-1;i>=0;i--){
            for(int j=1;j>=0;j--){
                for(int l=k;l>=1;l--){
                    if(j == 0) 
                        dp[i][j][l] = max(-prices[i]+dp[i+1][1][l],dp[i+1][0][l]);
                    else
                        dp[i][j][l] = max(prices[i]+dp[i+1][0][l-1],dp[i+1][1][l]);
                }
            }
        }
        return dp[0][0][k];
    }
};
