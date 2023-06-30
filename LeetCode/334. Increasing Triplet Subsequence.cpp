// class Solution {
// public:
//     int solve(int idx,int prev,vector<int>& nums,vector<vector<int>> &dp){
//         if(idx == nums.size())
//             return 0;
//         if(dp[idx][prev+1] != -1)
//             return dp[idx][prev+1] ;
//         int len = 0;
//         len = solve(idx+1,prev,nums,dp);
//         if(prev == -1 || nums[idx] > nums[prev])
//             len = max(len,1 + solve(idx+1,idx,nums,dp));
//         return dp[idx][prev+1] = len;
//     }
    
//     bool increasingTriplet(vector<int>& nums) {
//         int n = nums.size();
//         vector<vector<int>> dp(n,vector<int>(n,-1));
//         return solve(0,-1,nums,dp) >= 3 ? true:false;
//     }
// };
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int x = INT_MAX;
        int y = INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i] <= x)
                x = nums[i];
            else if(nums[i] <= y)
                y = nums[i];
            else 
                return true;
        }
        return false;
    }
};
