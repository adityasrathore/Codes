class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size();
        unordered_map <int,bool> mp;
        int count=0;
        for(int i=0;i<n;i++)
            mp[nums[i]]=true; // Assign the values in the array to be TRUE
        for(int i=0;i<n;i++)
            if(mp[nums[i]-diff] && mp[nums[i]+diff]) //If left and right diff exist then count is incremented
                count++;
        return count;
    }
};
