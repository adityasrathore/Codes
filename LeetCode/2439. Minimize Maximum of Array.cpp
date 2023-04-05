class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int ans=nums[0];
        long long total=nums[0];
        for(int i=1;i<nums.size();i++){
            total+=nums[i];
            if(ceil(total/(i+1))>=ans)
                ans=ceil(1.0*total/(i+1));
        }
        return ans;
    }
};
