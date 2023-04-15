class Solution{

	public:
	int perfectSum(int arr[], int n, int sum){
	    int mod=1e9+7;
        vector<vector<int>> dp(n,vector<int>(sum+1));
        for(int i=0;i<n;i++)
            dp[i][0]=1;
        for(int j=0;j<=sum;j++)
            dp[0][j]=0;
            
        dp[0][0]=1;
        if(arr[0]<=sum)
            dp[0][arr[0]]=1;
        if(arr[0]==0)
            dp[0][0]=2;
        for(int i=1;i<n;i++){
            for(int j=0;j<=sum;j++){
                int notPick=dp[i-1][j];
                int pick=0;
                if(j>=arr[i])
                    pick=dp[i-1][j-arr[i]];
                dp[i][j]=(pick+notPick)%(mod);
            }
        }
        return dp[n-1][sum];
	}
	  
};
