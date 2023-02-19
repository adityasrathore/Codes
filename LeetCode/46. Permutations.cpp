class Solution {
public:
    void solve(int idx,vector<vector<int>> &v,vector<int>& nums){
        if(idx==nums.size()){
            v.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            solve(idx+1,v,nums);
            swap(nums[idx],nums[i]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        solve(0,v,nums);
        return v;
    }
};
