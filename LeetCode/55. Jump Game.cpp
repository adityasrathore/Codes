class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int lastIdx=n-1;
        for(int i=n-1;i>0;i--){
            if(i-1+nums[i-1]>=lastIdx)
                lastIdx=i-1;
        }
        if(lastIdx==0)
            return true;
        return false;
    }
};
