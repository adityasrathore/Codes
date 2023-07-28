class Solution {
public:
    int solve(int i,int j,int opt,vector<int>& nums){
        if(i>j)
            return 0;
        
        if(opt == 0)
            return max(nums[i] + solve(i+1,j,1,nums),nums[j] + solve(i,j-1,1,nums));
        else
            return min(solve(i+1,j,0,nums),solve(i,j-1,0,nums));
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        long long two = 0;
        for(int i:nums)
            two += i;
        int one = solve(0,n-1,0,nums);
        two -= one;
        return one>=two;
    }
};
