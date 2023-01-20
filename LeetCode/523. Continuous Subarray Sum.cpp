class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        int n=nums.size();
        int prefixSum=0;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            prefixSum+=nums[i];
            if(mp.find(prefixSum%k)!=mp.end()){
                if(i-mp[prefixSum%k]>1){
                    return true;
                }
            }
            else
                mp[prefixSum%k]=i;
        }
        return false;
    }
};
