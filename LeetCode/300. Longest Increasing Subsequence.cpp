class Solution {
public:
    int t[2501][2501];
    int solve(int idx,int prev_idx,vector<int> &nums){
        if(idx==nums.size())
            return 0;
        if(t[idx][prev_idx+1]!=-1)
            return t[idx][prev_idx+1];
        int len=0 + solve(idx+1,prev_idx,nums);
        
        if(prev_idx == -1 || nums[idx]>nums[prev_idx])
             len=max(len,1+solve(idx+1,idx,nums));
        
        return t[idx][prev_idx+1]=len;
    }
    int lengthOfLIS(vector<int> &nums) {
        memset(t,-1,sizeof(t));
        return solve(0,-1,nums);
    }
};
