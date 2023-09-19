class Solution{
public:
    int solve(int idx,int N, int W, int val[], int wt[],vector<vector<int>> &dp){
        if(idx == 0){
            if(wt[0] <= W)
                return (W/wt[0])*val[0];
            return 0;
        }
        if(dp[idx][W] != -1)
            return dp[idx][W];
        int notTake = solve(idx-1,N,W,val,wt,dp);
        int take = INT_MIN;
        if(wt[idx] <= W)
            take = val[idx] + solve(idx,N,W-wt[idx],val,wt,dp);
            
        dp[idx][W] = max(take,notTake);
        
    }
    int knapSack(int N, int W, int val[], int wt[]){
        vector<vector<int>> dp(N,vector<int>(W+1,-1));
        return solve(N-1,N,W,val,wt,dp);
    }
};


class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[]){
        vector<vector<int>> dp(N,vector<int>(W+1,0));
      
        for(int j=wt[0];j<=W;j++){
            dp[0][j] = (j/wt[0])*val[0];
        }
        
        for(int i=1;i<N;i++){
            for(int j=1;j<=W;j++){
                int notTake = dp[i-1][j];
                int take = INT_MIN;
                if(j >= wt[i])
                    take = val[i] + dp[i][j-wt[i]];
                dp[i][j] = max(take,notTake);
            }
        }
        return dp[N-1][W];
    }
};
