class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int count = 0;
        int mod = 1e9+7;
        int l = 0, r = nums.size() - 1;
        vector<int> v = {1};
        for (int i=1; i<=nums.size();++i)
            v.push_back((v.back() << 1) % mod);   
        sort(begin(nums), end(nums));
        while (l <= r) {
            if (nums[l] + nums[r] > target) 
                r--;
            else
              count=(count+v[r-l++])%mod;
        }
        return count;
    }
};
