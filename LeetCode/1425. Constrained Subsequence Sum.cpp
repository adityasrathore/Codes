class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<int> t(n, 0);
        for(int i = 0; i<n; i++)
            t[i] = nums[i];
        
        int maxR = t[0];
        
        for(int i = 1; i<n; i++) {
            for(int j = i-1; i-j <= k && j >= 0; j--) {
                t[i] = max(t[i], nums[i] + t[j]);
            }
            
            maxR = max(maxR, t[i]);
        }
        
        
        return maxR;
    }
};
