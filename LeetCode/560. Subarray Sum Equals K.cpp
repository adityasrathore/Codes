class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map <int,int> mp;
        int prefixSum=0;
        int count=0;
        mp[0]++;
        //              1   1   1 (Example) k=2
        // prefixSum  0 1   2   3  
        // Freq       1 1   1   1
        // Count        0   1   2
        
        for(int i=0;i<n;i++){
            prefixSum+=nums[i];
            if(mp[prefixSum-k]>0)
                count+=mp[prefixSum-k];
            
            mp[prefixSum]++;
        }
        return count;
    }
}
