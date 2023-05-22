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
