class Solution {
public:
    int solve(int idx,vector<int>& coins, int amount,vector<vector<int>>&dp){
        if(idx == 0){
            if(amount%coins[0] == 0)
                return amount/coins[0];
            return 1e9;
        }
        if(dp[idx][amount] != -1)
            return dp[idx][amount];
        
        int notTake = solve(idx-1,coins,amount,dp);
        int take = 1e9;
        if(amount >= coins[idx])
            take = 1 + solve(idx,coins,amount-coins[idx],dp);
        return dp[idx][amount] = min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans = solve(n-1,coins,amount,dp);
        return  ans != 1e9 ? ans:-1;
    }
};

------------------------------------------------------------
    
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,0));
        for(int j=0;j<=amount;j++){
            if(j%coins[0]==0)
                dp[0][j] = (j/coins[0]);
            else
                dp[0][j] = 1e9;
        }

        
        for(int i=1;i<n;i++){
            for(int j=0;j<=amount;j++){
                int notPick=dp[i-1][j];
                int pick=INT_MAX;
                if(j>=coins[i])
                    pick=1+dp[i][j-coins[i]];
                dp[i][j]=min(pick,notPick);
            }
        }
        int ans=dp[n-1][amount];
        return ans==1e9?-1:ans;
    }
};
