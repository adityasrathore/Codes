class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int digitSum=0;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            while(temp){
                digitSum+=temp%10;
                temp/=10;
            }
        }
        return abs(sum-digitSum);
    }
};
