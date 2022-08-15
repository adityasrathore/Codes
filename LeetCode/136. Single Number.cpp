class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==1)
            return nums[0];
        int ans=-1;
        if(nums[0]!=nums[1])
            return nums[0];
        if(nums[n-2]!=nums[n-1])
            return nums[n-1];
        
        for(int i=1;i<=n-2;i++){
            int prev=nums[i-1];
            int next=nums[i+1];
            if(nums[i]!=prev && nums[i]!=next){
                return ans=nums[i];
            }
        }
        return ans;
    }
};
