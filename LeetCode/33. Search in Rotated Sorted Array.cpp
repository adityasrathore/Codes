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

class Solution {
public:
    int binarySearch(vector<int>& nums,int s,int e,int key){
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==key)
                return mid;
            else if(nums[mid]>key)
                e=mid-1;
            else
                s=mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int idx;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<=nums[(mid+1)%n] && nums[mid]<=nums[(mid-1+n)%n]){
                idx=mid;
                break;
            }
            else if(nums[0]<=nums[mid])
                s=mid+1;
            else
                e=mid-1;
        }
        int left=binarySearch(nums,0,idx-1,target);
        int right=binarySearch(nums,idx,n-1,target);
        return left!=-1 ? left:right;
    }
};
