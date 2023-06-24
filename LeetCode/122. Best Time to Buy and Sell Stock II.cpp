class Solution {
public:
    // opt = 0 (Buy) 
    // opt = 1 (Sell)
    int solve(int idx,vector<int>& prices,int opt){
        if(idx == prices.size())
            return 0;
        int profit = 0;
        if(opt == 0){
            profit = max(-prices[idx]+solve(idx+1,prices,1),solve(idx+1,prices,0));
        }
        else{
            profit = max(prices[idx]+solve(idx+1,prices,0),solve(idx+1,prices,1));
        }
        return profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        return solve(0,prices,0);
    }
};


class Solution {
public:
    // opt = 0 (Buy) 
    // opt = 1 (Sell)
    int solve(int idx,vector<int>& prices,int opt,vector<vector<int>> &dp){
        if(idx == prices.size())
            return 0;
        if(dp[idx][opt] != -1)
            return dp[idx][opt];
        int profit = 0;
        if(opt == 0){
            profit = max(-prices[idx]+solve(idx+1,prices,1,dp),solve(idx+1,prices,0,dp));
        }
        else{
            profit = max(prices[idx]+solve(idx+1,prices,0,dp),solve(idx+1,prices,1,dp));
        }
        return dp[idx][opt] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solve(0,prices,0,dp);
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,0));
        dp[n][0] = 0;
        dp[n][1] = 0;
        for(int i=n-1;i>=0;i--){
            for(int j=1;j>=0;j--){
                int profit = 0;
                if(j==0)
                    profit = max(-prices[i]+dp[i+1][1],dp[i+1][0]);
                else
                    profit = max(prices[i]+dp[i+1][0],dp[i+1][1]);
                
                dp[i][j] = profit;
            }
        }
        return dp[0][0];
    }
};
