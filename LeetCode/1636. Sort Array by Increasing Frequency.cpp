class Solution {
public:
    bool static comp(pair<int,int> &a,pair<int,int> &b){
        if(a.second == b.second)
            return a>b;
        return a.second<b.second;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        
        vector <pair<int,int>> s;
        for(auto i:mp)
            s.push_back(i);
        
        sort(s.begin(),s.end(),comp);
        vector<int> v;
        for(int i=0;i<s.size();i++)
            while(s[i].second--)
                v.push_back(s[i].first);
        
        return v;
    }
};
