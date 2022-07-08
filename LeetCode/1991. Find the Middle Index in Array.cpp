class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size(),i;
        int suml=0;
        int sumr=accumulate(nums.begin(),nums.end(),0)-nums[0];
        if(suml==sumr)
                return 0;
        
        for(i=0;i<=n-2;i++){
            suml+=nums[i];
            sumr=sumr-nums[i+1];
            if(suml==sumr)
                return i+1;
        }    
        return -1;
    }
};
