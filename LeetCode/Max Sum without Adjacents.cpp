class Solution{
public:	
    int solve(int idx,int *arr,vector <int> &dp){
        if(idx==0)
            return arr[0];
        if(idx<0)
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        int left=arr[idx]+solve(idx-2,arr,dp);
        int right=solve(idx-1,arr,dp);
        return dp[idx]=max(left,right);
    }
	int findMaxSum(int *arr, int n) {
	    vector <int> dp(n,-1);
	    return solve(n-1,arr,dp);
	}
};
