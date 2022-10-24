class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector <int> temp(nums);
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(auto i:nums)
            cout<<i<<" ";
        if(nums[n-1]>=2*nums[n-2])
            return max_element(temp.begin(),temp.end())-temp.begin();
        else
            return -1;
    }
};
