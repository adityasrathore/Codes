    int solve(int idx,int wt[], int val[],int w,vector<vector<int>> &dp){
        if(idx==0){
            if(wt[0]<=w){
                return val[0];
            }
            return 0;
        }
        if(dp[idx][w]!=-1)
            return dp[idx][w];
        int notPick=solve(idx-1,wt,val,w,dp);
        int pick=INT_MIN;
        if(wt[idx]<=w)
            pick=val[idx]+solve(idx-1,wt,val,w-wt[idx],dp);
        return dp[idx][w]=max(pick,notPick);
    }
    int knapSack(int W, int wt[], int val[], int n){ 
        vector<vector<int>> dp(n,vector<int>(W+1,-1));
        return solve(n-1,wt,val,W,dp);
    }


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
