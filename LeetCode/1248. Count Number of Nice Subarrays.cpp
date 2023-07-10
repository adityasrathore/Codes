class Solution {
public:
    int solve(vector<int>& nums, int k){
        int n = nums.size();
        unordered_map<int,int> mp;
        int count = 0;
        int j = 0;
        for(int i=0;i<n;i++){
            if(nums[i]%2 == 1)
                mp[nums[i]]++;
            while(mp[1] > k){
                mp[nums[j]]--;
                if(mp[nums[j]] == 0)
                    mp.erase(mp[nums[j]]);
                j++;
            }
            
            count += (i-j+1);
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2 == 0)
                nums[i] = 0;
            else
                nums[i] = 1;
        }
        return solve(nums,k)-solve(nums,k-1);
    }
};
