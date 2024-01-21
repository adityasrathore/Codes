class Solution {
public:
    int rob(vector<int>& nums) {
        const int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        vector<int> f(n, 0);
        f[0] = nums[0];
        f[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; ++i)
            f[i] = max(f[i-2] + nums[i], f[i-1]);
        return f[n-1];
    }
};



class Solution {
public:
    int solve(int idx,vector<int>& nums,vector<int> &dp){
        if(idx == 0)
            return nums[0];
        if(idx < 0)
            return 0;
        if(dp[idx] != -1)
            return dp[idx];
        int p = nums[idx] + solve(idx-2,nums,dp);
        int notp = solve(idx-1,nums,dp);
        return dp[idx] = max(p,notp);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return solve(n-1,nums,dp);
    }
};


class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        vector<int> dp(n,0);
        
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        
        for(int i=2;i<n;i++)
            dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
        
        return dp[n-1];
    }
};


