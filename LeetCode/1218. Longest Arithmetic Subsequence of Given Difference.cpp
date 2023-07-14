class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int n = arr.size();
        unordered_map <int,int> mp;
        int ans = 0;
        for(int i=0;i<n;i++){
            int t = arr[i] - difference;
            int temp = 0;
            if(mp[t] > 0)
                temp = mp[t];
            mp[arr[i]] = 1 + temp;
            ans = max(ans,mp[arr[i]]);
        }
        return ans;
    }
};
