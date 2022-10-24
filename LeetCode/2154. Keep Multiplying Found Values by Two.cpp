class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        unordered_map <int,int> mp;
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        
        while(1)
            if(mp[original]==0)
                return original;
            else
                if(mp[original]>0)
                    original=original*2;
        return 0;
    }
};
