class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),sum=0,maxprofit=INT_MIN;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>maxprofit)
                maxprofit=sum;
            if(sum<0)
                sum=0;
        }
        return maxprofit;
    }
};
