class Solution {
  public:
    long long solve(int idx,int coins[], int N, int sum,vector<vector<long long>> &dp){
        if(idx == 0){
            if(sum%coins[0] == 0)
                return 1;
            return 0;
        }
        if(dp[idx][sum] != -1)
            return dp[idx][sum];
        long long notTake = solve(idx-1,coins,N,sum,dp);
        long long take = 0;
        if(coins[idx] <= sum)
            take = solve(idx,coins,N,sum-coins[idx],dp);
        return dp[idx][sum] = take + notTake; 
    }
    long long int count(int coins[], int N, int sum) {
        vector<vector<long long>> dp(N,vector<long long>(sum+1,-1));
        return solve(N-1,coins,N,sum,dp);
    }
};



-----------------------------



class Solution {
  public:
    long long int count(int coins[], int n, int sum) {
        vector<vector<long long>> dp(n,vector<long long>(sum+1,0));
        for(int i=0;i<n;i++){
            dp[i][0] = 1;
        }
        for(int j=1;j<=sum;j++){
            if(j%coins[0] == 0)
                dp[0][j] = 1;
        }
        
        for(int i=1;i<n;i++){
            for(int j=1;j<=sum;j++){
                long long notTake = dp[i-1][j];
                long long take = 0;
                if(coins[i] <= j)
                    take = dp[i][j-coins[i]];
                dp[i][j] = take + notTake;
            }
        }
        return dp[n-1][sum];
    }
};
