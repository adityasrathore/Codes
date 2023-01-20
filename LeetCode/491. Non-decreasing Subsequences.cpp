class Solution {
public:    
    void dfs(vector<vector<int>>& ans, vector<int>& v, vector<int>& nums, int pos) {
        if(v.size() > 1) 
            ans.push_back(v);
        unordered_set<int> s;
        for(int i=pos; i<nums.size();i++) {
            if((v.empty() || nums[i] >= v.back()) && s.find(nums[i]) == s.end()) {
                v.push_back(nums[i]);
                dfs(ans, v, nums, i + 1);
                v.pop_back();
                s.insert(nums[i]);
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        dfs(ans, v, nums, 0);
        return ans;
    }
};
