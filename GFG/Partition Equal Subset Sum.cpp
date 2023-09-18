class Solution{
public:
    int equalPartition(int N, int arr[]){
        int sum = 0;
        for(int i=0;i<N;i++){
            sum += arr[i];
        }
        if(sum%2 == 1)
            return 0;
        sum /= 2;
        vector<vector<int>> dp(N,vector<int>(sum+1,0));
        
        for(int i=0;i<N;++i){
            dp[i][0] = 1;
        }
        if(arr[0] <= sum)
            dp[0][arr[0]] = 1;
        for(int i=1;i<N;i++){
            for(int j=1;j<=sum;j++){
                int notTake = dp[i-1][j];
                int take = false;
                if(j >= arr[i])
                    take = dp[i-1][j-arr[i]];
                dp[i][j] = take || notTake;
            }
        }
        return dp[N-1][sum];
    }
};
