class Solution {
public:
    void solve(int idx,vector<int> &ans,vector<vector<int>> &v,vector<int> &nums){
        v.push_back(ans);
        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1])
                continue;
            ans.push_back(nums[i]);
            solve(i+1,ans,v,nums);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector <int> ans;
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        solve(0,ans,v,nums);
        return v;
    }
};
