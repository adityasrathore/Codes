class Solution {
  public:
    int countPartitions(int n, int d, vector<int>& arr) {
        int mod=1e9+7;
        int tsum=accumulate(arr.begin(),arr.end(),0);
        if(tsum-d<0 || (tsum-d)%2==1)
            return 0;
        tsum=(tsum-d)/2;
        vector<vector<int>> dp(n,vector<int>(tsum+1));
        
        for(int i=0;i<n;i++)
            dp[i][0]=1;
        for(int j=0;j<=tsum;j++)
            dp[0][j]=0;
            
        dp[0][0]=1;
        if(arr[0]<=tsum )
            dp[0][arr[0]]=1;
        if(arr[0]==0)
            dp[0][0]=2;
            
        for(int i=1;i<n;i++){
            for(int j=0;j<=tsum;j++){
                int notPick=dp[i-1][j];
                int pick=0;
                if(j>=arr[i])
                    pick=dp[i-1][j-arr[i]];
                dp[i][j]=(pick+notPick)%mod;
            }
        }
        return dp[n-1][tsum];
    }
};
