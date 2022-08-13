class Solution {
public:
    int BS(vector<int>& nums, int target,int i,int j){
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
    
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1;
        int a=-1;
        if(nums[0]<nums[n-1])
            return BS(nums,target,i,j);
        while(i<=j){
            int mid=i+(j-i)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if(nums[mid]<=nums[prev] && nums[mid]<=nums[next]){
                a=mid;
                break;
            }
            else if(nums[0]<=nums[mid])
                i=mid+1;
            else
                j=mid-1;
        }
        i=0;
        j=n-1;
        int left=BS(nums,target,i,a-1);
        int right=BS(nums,target,a,j);
        return max(left,right);
    }
};
