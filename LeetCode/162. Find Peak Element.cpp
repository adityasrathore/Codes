class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        if(n==1 || nums[0]>nums[1]) //For Base Case and Border Condition
            return 0;
        if(nums[n-1]>nums[n-2]) //Border Condition
            return n-1;

        int a=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if((mid-1>=0 && nums[mid]>nums[mid-1]) &&  
                        ((mid-1)<n && nums[mid]>nums[mid+1])) //Checking Neighbours and their bounds to not let overflow condition
                return a=mid;
            if(nums[mid+1]>nums[mid])
                i=mid+1;
            else
                j=mid-1; 
            
        }
        return a;
    }
};
