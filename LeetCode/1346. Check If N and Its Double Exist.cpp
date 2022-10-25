class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        for(auto i: mp) {
            if(i.first != 0 && mp.find(2*i.first)!=mp.end())    
                return true;
            if(i.first==0 && i.second>1) 
                return true;
        }
        return false;
    }
};
