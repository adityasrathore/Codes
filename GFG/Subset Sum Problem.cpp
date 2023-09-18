class Solution{   
public:
    // bool solve(int idx,vector<int>& arr, int sum,vector<vector<int>> &dp){
    //     if(sum == 0)
    //         return true;
    //     if(idx == 0)
    //         return arr[0] == sum;
    //     if(dp[idx][sum] != -1)
    //         return dp[idx][sum];
    //     bool notTake = solve(idx-1,arr,sum,dp);
    //     bool take = false;
    //     if(sum >= arr[idx])
    //         take = solve(idx-1,arr,sum-arr[idx],dp);
    //     return dp[idx][sum] = take || notTake;
    // }
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        vector<vector<int>> dp(n,vector<int>(sum+1,0));
        for(int i=0;i<n;i++){
            dp[i][0] = 1;
        }
        if(arr[0] <= sum)
            dp[0][arr[0]] = 1;
        for(int i=1;i<n;i++){
            for(int j=1;j<=sum;j++){
                int notTake = dp[i-1][j];
                int take = false;
                if(j >= arr[i])
                    take = dp[i-1][j-arr[i]];
                    
                dp[i][j] = take || notTake;
            }
        }
        return dp[n-1][sum];
    }
};
