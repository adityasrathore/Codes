class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int len = INT_MAX;
        long long sum = 0;
        int j = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            while(sum-nums[j] >= target){
                sum -= nums[j];
                j++;
            }
             if(sum >= target){
                len = min(len,i-j+1);
            }
        }
        return len == INT_MAX ? 0 : len;
    }
};
