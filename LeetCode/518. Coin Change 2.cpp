class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,0));
        for(int i=0;i<n;i++)
            dp[i][0] = 1;
        for(int j=0;j<=amount;j++)
            if(j%coins[0] == 0)
                dp[0][j] = 1;
        for(int i=1;i<n;i++){
            for(int j=1;j<=amount;j++){
                int notTake = dp[i-1][j];
                int take = 0;
                if(coins[i] <= j)
                    take = dp[i][j-coins[i]];
                
                dp[i][j] = take + notTake;
            }
        }
        return dp[n-1][amount];
    }
};

class Solution {
public:
    int t[301][15001];
    int change(int sum, vector<int>& coins) {
        int n=coins.size();
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                    t[i][j]=0;
                if(j==0)
                    t[i][j]=1;
            }
        }
        for(int i=1;i<n+1;++i)
            for(int j=1;j<sum+1;++j)
                if(coins[i-1]<=j)
                    t[i][j]=(t[i][j-coins[i-1]]+t[i-1][j]);
                else
                    t[i][j]=t[i-1][j];
            
        
        return t[n][sum];
    }
    
};
