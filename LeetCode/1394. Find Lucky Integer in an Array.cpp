class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        unordered_map <int,int> mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        int ans=-1;
        for(auto i:mp)
            if(i.first==i.second)
                ans=max(ans,i.first);
        
        return ans;
    }
};
