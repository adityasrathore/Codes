class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long> pref(n);
        pref[0] = 2*nums[0];
        long long sum = 2*nums[0];
        long long m = nums[0];
        for(int i=1;i<n;i++){
            if(m < nums[i])
                m = nums[i];
            sum += nums[i] + m;
            pref[i] = sum;
        }
      
        return pref;
    }
};
