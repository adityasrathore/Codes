class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,0));
        
        for(int i=n-1;i>=0;i--){
            for(int j=1;j>=0;j--){
                if(j == 0)
                    dp[i][j] = max(-fee-prices[i]+dp[i+1][1],dp[i+1][0]);
                else
                    dp[i][j] = max(prices[i]+dp[i+1][0],dp[i+1][1]);
            }
        }
        return dp[0][0];
    }
};


BUY == 1
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,0));
        for(int i=n-1;i>=0;i--){
            for(int j=1;j>=0;j--){
                if(j == 1)
                    dp[i][j] = max(-fee-prices[i]+dp[i+1][0],dp[i+1][1]);
                else
                    dp[i][j] = max(prices[i]+dp[i+1][1],dp[i+1][0]);
            }
        }
        return dp[0][1];
    }
}; 
