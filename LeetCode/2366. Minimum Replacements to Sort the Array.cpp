class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long res=0;
        int n=nums.size();
        int mxm=nums[n-1];
        long long val;
        for(int i=n-2;i>=0;i--){
            val= ceil(nums[i]/(double)mxm); 
            res+=(val-1);
            val=nums[i]/val;
            mxm= val;
        }
        return res;
    }
};
