class Solution {
public:
    void solve(vector<int> &ans,vector<vector<int>> &v,vector<int> &nums,vector<int> &freq){
        if(ans.size()==nums.size()){
            v.push_back(ans);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[i]==0){
                ans.push_back(nums[i]);
                freq[i]=1;
                solve(ans,v,nums,freq);
                freq[i]=0;
                ans.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector <int> ans;
        vector <int> freq(nums.size(),0);
        vector<vector<int>> v;
        solve(ans,v,nums,freq);
        set <vector<int>> s;
        for(auto i:v)
            s.insert(i);
        v.clear();
        for(auto i:s)
            v.push_back(i);
        return v;
    }
};
