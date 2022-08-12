class Solution {
public:
    int search(vector<int>& nums, int target) {
        int j=nums.size()-1;
        int i=0;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                j=mid-1;
            else
                i=mid+1;
        }
        return -1;
    }
};
