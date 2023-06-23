class Solution {
public:
    // int solve(int idx,int diff,vector<int>& nums,unordered_map <int,int> dp[]){
    //     if(idx < 0)
    //         return 0;
    //     if(dp[idx][diff] > 0)
    //         return dp[idx][diff];
    //     int ans = 0;
    //     for(int i=idx-1;i>=0;i--){
    //         if(nums[idx]-nums[i] == diff){
    //             ans = max(ans,1+solve(i,diff,nums,dp));
    //         }
    //     }
    //     return dp[idx][diff] = ans;
    // }
    int longestArithSeqLength(vector<int>& nums) {
        // int n = nums.size();
        // unordered_map <int,int> dp[n+1];
        // if(n <= 2)
        //     return n;
        // int ans = 0;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         ans = max(ans,2+solve(i,nums[j]-nums[i],nums,dp));
        //     }
        // }
        // return ans;
        int n = nums.size();
        unordered_map <int,int> dp[n+1];
        if(n <= 2)
            return n;
        int ans = 0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                int diff = nums[i] - nums[j];
                int count = 1;
                if(dp[j][diff]>0)
                    count = dp[j][diff];
                dp[i][diff] = 1 + count;
                ans = max(ans,dp[i][diff]);
            }
        }
        return ans;
    }
};
