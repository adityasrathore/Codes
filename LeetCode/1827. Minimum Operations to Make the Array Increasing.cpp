class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size(); 
        int j=INT_MIN;
        int t=0;
        if(n==1)
            return 0;
        for(int i=0;i<n;i++){
            if(j<nums[i]){
                j=nums[i];
            }
            else{
                j++;
                t+=j-nums[i];
            }
        }
        return t;
    }
};
