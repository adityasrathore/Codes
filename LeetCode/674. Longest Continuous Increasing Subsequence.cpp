class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int count = 1;
        for(int i=0;i<n-1;i++){
            if(nums[i] < nums[i+1])
                count++;
            else{
                ans = max(count,ans);
                count = 1;
            }
        }
        return ans = max(count,ans);
    }
};
