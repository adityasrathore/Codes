class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int solve(int idx,int W, int wt[], int val[], int n,vector<vector<int>> &dp){
        if(idx == 0){
            if(wt[0] <= W)
                return val[0];
            return 0;
        }
        if(dp[idx][W] != -1)
            return dp[idx][W];
        int notTake = solve(idx-1,W,wt,val,n,dp);
        int take = INT_MIN;
        if(wt[idx] <= W){
            take = val[idx] + solve(idx-1,W-wt[idx],wt,val,n,dp);
        }
        return dp[idx][W] = max(take,notTake);
    }
    int knapSack(int W, int wt[], int val[], int n){ 
        vector<vector<int>> dp(n,vector<int>(W+1,-1));
        return solve(n-1,W,wt,val,n,dp);
    }
};

-----------------------------------------------------
    int knapSack(int W, int wt[], int val[], int n){ 
        // vector<vector<int>> dp(n,vector<int>(W+1,-1));
        // return solve(n-1,wt,val,W,dp);
        vector<vector<int>> dp(n,vector<int>(W+1,0));
        for(int j=wt[0];j<=W;j++){
            dp[0][j]=val[0];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<=W;j++){
                int notPick=dp[i-1][j];
                int pick=INT_MIN;
                if(j>=wt[i])
                    pick=val[i]+dp[i-1][j-wt[i]];
                dp[i][j]=max(pick,notPick);
            }
        }
        return dp[n-1][W];
    }
