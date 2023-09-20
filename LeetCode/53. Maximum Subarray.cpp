class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max = *max_element(nums.begin(),nums.end());
        if(max < 0)
            return max;
        int maxSum = INT_MIN;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum < 0)
                sum = 0;
            if(sum > maxSum)
                maxSum = sum;
        }
        return maxSum;
    }
};
---------------------------------------------


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



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxSum=*min_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(maxSum<sum)
                maxSum=sum;
            if(sum<0)
                sum=0;
        }
        return maxSum;
    }
};
