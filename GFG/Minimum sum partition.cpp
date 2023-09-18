class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    int sum = 0;
	    for(int i=0;i<n;i++){
	        sum += arr[i];
	    }
	    vector<vector<bool>> dp(n,vector<bool>(sum+1,false));
	    for(int i=0;i<n;i++)
	        dp[i][0] = true;
	    if(arr[0] <= sum)
	        dp[0][arr[0]] =true;       
	    for(int i=1;i<n;i++){
	        for(int j=1;j<=sum;j++){
	            bool notTake = dp[i-1][j];
	            bool take = false;
	            if(j >= arr[i])
	                take = dp[i-1][j-arr[i]];
	            dp[i][j] = notTake || take;
	        }
	    }
	    int minDiff = INT_MAX;
	    for(int j=0;j<=sum/2;j++){
	        if(dp[n-1][j] == true){
	            int s1 = j;
	            int s2 = sum - j;
	            minDiff = min(minDiff,abs(s1-s2));
	        }
	    }
	    return minDiff;
	} 
};
