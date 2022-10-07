class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map <int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        vector <int> v;
        for(int i=0;i<n;i++){
            int t=0;
            for(auto j:mp)
                if(j.first<nums[i])
                    t+=j.second;
            v.push_back(t);
        }
        return v;
    }
};
