class Solution {
public:
    int combinationSum4(vector<int>& nums, int k) {
        vector<double>dp(k+1);
        dp[0]=1;
        for(int i=1;i<=k;i++){
            for(int n:nums){
                if(n<=i)
                    dp[i] += dp[i-n];
            }
        }
        return dp[k];
    }
};
