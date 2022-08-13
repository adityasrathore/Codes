class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        int a=-1;
        if(nums[0]<nums[n-1])
            return nums[0];
        while(i<=j){
            int mid=i+(j-i)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if(nums[mid]<=nums[prev] && nums[mid]<=nums[next])
                return a=nums[mid];
            else if(nums[0]<=nums[mid])
                i=mid+1;
            else
                j=mid-1;
        }
        return a;
    }
};
