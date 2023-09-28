class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> v;
        int n=nums.size();
        for(int i=0;i<n;i++)
            if(nums[i]%2==0)
                v.push_back(nums[i]);
        for(int i=0;i<n;i++)
            if(nums[i]%2==1)
                v.push_back(nums[i]);
        return v;
    }
};



905. Sort Array By Parity
