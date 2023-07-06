class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<n;i++){
            if(nums[i] <= nums[i-1]){
                int temp = nums[i-1] + 1;
                count += temp - nums[i];
                nums[i] = temp;
            }
        }
        return count;
    }
};
