class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        int n1=items1.size();
        int n2=items2.size();
        unordered_map <int,int> mp;
        for(int i=0;i<n1;i++)
            mp[items1[i][0]]+=items1[i][1];
        for(int i=0;i<n2;i++)
            mp[items2[i][0]]+=items2[i][1];
        
        vector <vector<int>> v;
        for(auto i:mp){
            vector<int> temp(2);
            temp[0]=i.first;
            temp[1]=i.second;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        return v;
    }
};
