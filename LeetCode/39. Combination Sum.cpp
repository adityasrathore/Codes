class Solution {
public:
    void solve(int idx,vector<int> &ans,vector<vector<int>> &v,vector<int>& candidates, int target){
        if(idx == candidates.size()){
            if(target == 0){
                v.push_back(ans);
            }
            return;
        }
        if(target>=candidates[idx]){
            ans.push_back(candidates[idx]);
            solve(idx,ans,v,candidates,target-candidates[idx]);
            ans.pop_back();
        }
        solve(idx+1,ans,v,candidates,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <int> ans;
        vector <vector<int>> v;
        solve(0,ans,v,candidates,target);
        return v;
    }
};
