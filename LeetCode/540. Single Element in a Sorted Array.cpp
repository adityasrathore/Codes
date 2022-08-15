class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        if(n==1 || nums[0]!=nums[1])
            return nums[0];
        if(nums[n-1]!=nums[n-2])
            return nums[n-1];
        int ans=-1;
        
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
                return ans=nums[mid];
            else if((nums[mid]==nums[mid-1] && mid%2==0)
                || (nums[mid]==nums[mid+1] && mid%2==1))
                j=mid-1;
            else
                i=mid+1;
        }
        return ans;
    }
};
