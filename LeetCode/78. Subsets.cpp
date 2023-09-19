class Solution {
public:
    void solve(int idx,vector<int> &ans,vector<vector<int>> &v,vector<int>& nums){
        if(idx == nums.size()){
            v.push_back(ans);
            return;
        }
        ans.push_back(nums[idx]);
        solve(idx+1,ans,v,nums);
        ans.pop_back();
        solve(idx+1,ans,v,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> ans;
        vector <vector<int>> v;
        solve(0,ans,v,nums);
        return v;
    }
};

---------------------------------------------------------------

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        int p = (1 << n);
        for(int i=0;i<p;i++){
            vector<int> v;
            for(int j=0;j<n;j++){
                if(i & (1<<j))
                    v.push_back(nums[j]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
