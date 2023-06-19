class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int ans = 0;
        int temp = 0;
        for(int i=0;i<n;i++){
            temp += gain[i];
            ans = max(temp,ans);
        }
        return ans;
    }
};
