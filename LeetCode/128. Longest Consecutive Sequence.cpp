class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0 || n==1)
            return n;
        int count=1;
        int maxCount=INT_MIN;
        for(int i=1;i<n;i++){
            if(nums[i-1]!=nums[i])
                if(nums[i-1]+1==nums[i])
                    count++;
            else 
                count=1;
            if(count>maxCount)
                maxCount=count;
        }
        return maxCount;
    }
};
