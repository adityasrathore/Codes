class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map <int,int> mp;
        int j = 0;
        int count1 = 0,count2 = 0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp.size() > k){
                mp[nums[j]]--;
                if(mp[nums[j]] == 0)
                    mp.erase(nums[j]);
                j++;
            }
            count1 += i - j + 1;
        }
        k = k - 1; // Reducing for atmost 1 lesser
        cout<<k<<endl;
        mp.clear();
        j = 0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp.size() > k){
                mp[nums[j]]--;
                if(mp[nums[j]] == 0)
                    mp.erase(nums[j]);
                j++;
            }
            count2 += i - j + 1;
        }
        return count1-count2;
    }
};
