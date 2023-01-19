class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        int n=nums.size();
        int count=0;
        int prefixSum=0;
        mp[0]++;
        for(int i=0;i<n;i++){
            prefixSum=(prefixSum+nums[i]%k+k)%k;
            count+=mp[prefixSum]++;
        }
        return count;
    }
};
