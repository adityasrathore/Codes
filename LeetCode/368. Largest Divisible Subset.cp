class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,1); // Length
        vector<int> v(n); // Index
        
        sort(nums.begin(),nums.end()); // Most Imp U Dick Aditya Dont Forget
        int maxIdx = 0;
        int maxLen = 1;
        for(int i=0;i<n;i++){
            v[i] = i; // Indexing to itself
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j] == 0 && 1+dp[j] > dp[i]){
                    dp[i] = 1+dp[j];
                    v[i] = j;
                }
            }
            if(dp[i] > maxLen){
                maxLen = dp[i];
                maxIdx = i;
            }
        }
        vector<int> ans;
        ans.push_back(nums[maxIdx]);
        while(maxIdx != v[maxIdx]){
            maxIdx = v[maxIdx];
            ans.push_back(nums[maxIdx]);
        }
        return ans;
    }
};
