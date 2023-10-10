class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> v;
        int n=nums.size();
        unordered_map <int,int> m;
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater< pair<int,int>>> minh;
        for(auto i=m.begin();i!=m.end();i++){
            minh.push(make_pair(i->second,i->first));
            if(minh.size()>k)
                minh.pop();
        }
        while(!minh.empty()){
            v.push_back(minh.top().second);
            minh.pop();
        }
        
        return v;
    }
};



class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        int n = nums.size();
        for(auto i:nums)
            mp[i]++;
        vector<vector<int>> v(n+1);
        for(auto i:mp){
            if(i.second > 0)
                v[i.second].push_back(i.first);
        }

        vector<int> ans;
        for(int i=n;i>0;i--){
            int j = v[i].size();
            while(j-- && k > 0){
                ans.push_back(v[i][j]);
                k--;
            }
            
        }

        return ans;
    }
};
