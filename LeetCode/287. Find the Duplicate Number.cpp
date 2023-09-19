class Solution {
public:
    int  findDuplicate(vector<int>& nums) {
        sort(nums.begin() ,nums.end());
        int n=nums.size();
        for(int i=1;i<n;i++)
            if(nums[i]==nums[i-1])
                return nums[i];
        return 0;
    }
};
---------------------
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int,int> mp;
        for(auto i:nums)
            mp[i]++;
        
        for(auto i:mp)
            if(i.second > 1)
                return i.first;
        return -1;
    }
};
