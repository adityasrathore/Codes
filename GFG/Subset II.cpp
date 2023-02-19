class Solution {

  public:
    void solve(int idx,vector<int> &ans,vector<vector<int>> &v,vector <int> &nums){
        v.push_back(ans);
        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i-1]==nums[i])
                continue;
            ans.push_back(nums[i]);
            solve(i+1,ans,v,nums);
            ans.pop_back();
        }
    }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        solve(0,ans,v,nums);
        return v;
    }
};
