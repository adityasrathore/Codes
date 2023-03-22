class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map <int,int> mp;
        int n=target.size();
        int m=arr.size();
        for(int i:target){
            mp[i]++;
        }
        for(int i:arr){
            mp[i]--;
        }
        for(auto i:mp){
            if(i.second!=0)
                return false;
        }
        return true;
        
    }
};
