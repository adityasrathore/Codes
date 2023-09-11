class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        unordered_map <int,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[groupSizes[i]].push_back(i);
        }
        
        
        vector<vector<int>> v;
        for(auto i:mp){
            int t = i.second.size()/i.first;
            while(t--){
                vector<int> temp;
                for(int j=0;j<i.first;j++)
                    temp.push_back(i.second[j]);
                v.push_back(temp);
            }
        }
        return v;
    }
};
