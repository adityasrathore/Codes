class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp1(n,1);
        vector<int> dp2(n,1);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i] > nums[j] && 1+dp1[j] > dp1[i])
                    dp1[i] = 1+dp1[j];
            }
        }
        reverse(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i] > nums[j] && 1+dp2[j] > dp2[i])
                    dp2[i] = 1+dp2[j];
            }
        }
        reverse(dp2.begin(),dp2.end());
        int maxLen = 1;
        for(int i=0;i<n;i++){
            if(dp1[i]>1 && dp2[i]>1){
                maxLen = max(dp1[i] + dp2[i] - 1, maxLen);
            }
        }
        
        return n-maxLen;
    }
};
