class Solution {
public:
    void solve(int idx,vector<int> &ans,vector<vector<int>> &v,vector<int>& candidates,int target){
        if(target==0){
            v.push_back(ans);
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            if(i>idx && candidates[i]==candidates[i-1])
                continue;
            if(candidates[i]>target)
                break;
            ans.push_back(candidates[i]);
            solve(i+1,ans,v,candidates,target-candidates[i]);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector <int> ans;
        vector <vector<int>> v;
        sort(candidates.begin(),candidates.end());
        solve(0,ans,v,candidates,target);
        return v;
    }
};
