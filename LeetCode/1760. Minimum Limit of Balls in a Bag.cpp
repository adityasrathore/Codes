class Solution {
public:
    bool isValid(int mid,int k,vector<int> &nums){
        int count=0;
        for(int i=0;i<nums.size();i++){
            int x=nums[i]/mid;
            if(nums[i]%mid==0)
                x--;
            count+=x;
            if(count>k)
                return false;
        }
        return true;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int s=1;
        int e=*max_element(nums.begin(),nums.end());
        int ans;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isValid(mid,maxOperations,nums)==true){
                ans=mid;
                e=mid-1;
            }
            else
                s=mid+1;
        }
        return ans;
    }
};
