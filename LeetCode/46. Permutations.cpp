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



class Solution {
public:
    void solve(vector<int> &freq,vector<int> &nums,vector<int> &ans, vector<vector<int>> &v){
        if(ans.size()==nums.size()){
            v.push_back(ans);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[i]==0){
                ans.push_back(nums[i]);
                freq[i]=1;
                solve(freq,nums,ans,v);
                freq[i]=0;
                ans.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector <int> ans;
        vector <int> freq(nums.size(),0);
        vector <vector<int>> v;
        solve(freq,nums,ans,v);
        return v;
    }
};
