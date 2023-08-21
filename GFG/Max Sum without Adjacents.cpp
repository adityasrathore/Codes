class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int solve(int idx,int *arr, int n,vector<int> &dp){
	    if(idx == 0)
	        return arr[0];
	    if(idx < 0)
	        return 0;
	    if(dp[idx] != -1)
	        return dp[idx];
	    int pick = solve(idx-2,arr,n,dp) + arr[idx];
	    int notpick = solve(idx-1,arr,n,dp);
	    return dp[idx] = max(pick,notpick);
	}
	int findMaxSum(int *arr, int n) {
	    vector<int> dp(n,-1);
	    return solve(n-1,arr,n,dp);
	}
};
