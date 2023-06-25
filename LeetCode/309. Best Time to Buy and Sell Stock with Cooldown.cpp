class Solution {
public:
    // int opt = 0 (buy)
    // int opt = 1 (sell)
    int solve(int idx,int opt,vector<int>& prices,vector<vector<int>> &dp){
        if(idx >= prices.size())
            return 0;
        if(dp[idx][opt] != -1)
            return dp[idx][opt];
        int profit = 0;
        if(opt == 0)    
            profit = max(-prices[idx]+solve(idx+1,1,prices,dp),solve(idx+1,0,prices,dp));            
        else
            profit = max(prices[idx]+solve(idx+2,0,prices,dp),solve(idx+1,1,prices,dp)); 
        return dp[idx][opt] = profit;            
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solve(0,0,prices,dp);
    }
};
