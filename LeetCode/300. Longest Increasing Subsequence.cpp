class Solution {
public:
    int solve(int idx,int prev,vector<int>& nums){
        if(idx == nums.size())
            return 0;
        int len = 0;
        len = solve(idx+1,prev,nums);
        if(prev == -1 || nums[idx] > nums[prev])
            len = max(len,1 + solve(idx+1,idx,nums));
        return len;
    }
    int lengthOfLIS(vector<int>& nums) {

        return solve(0,-1,nums);
    }
};

class Solution {
public:
    int solve(int idx,int prev,vector<int>& nums,vector<vector<int>> &dp){
        if(idx == nums.size())
            return 0;
        if(dp[idx][prev+1] != -1)
            return dp[idx][prev+1] ;
        int len = 0;
        len = solve(idx+1,prev,nums,dp);
        if(prev == -1 || nums[idx] > nums[prev])
            len = max(len,1 + solve(idx+1,idx,nums,dp));
        return dp[idx][prev+1] = len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return solve(0,-1,nums,dp);
    }
};

 class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i=n-1;i>=0;i--){
            for(int j=i-1;j>=-1;j--){
                dp[i][j+1] = dp[i+1][j+1];
                if(j == -1 || nums[i] > nums[j])
                    dp[i][j+1] = max(dp[i+1][j+1],1 + dp[i+1][i+1]);
            }
        }
        return dp[0][0];
    }
};

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i] > nums[j])
                    dp[i] = max(dp[i],1 + dp[j]);
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector <int> v;
        v.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i] > v.back()){
                v.push_back(nums[i]);
                continue;
            }
            int idx = lower_bound(v.begin(),v.end(),nums[i]) - v.begin();
            v[idx] = nums[i];
        }
        return v.size();
    }
};
