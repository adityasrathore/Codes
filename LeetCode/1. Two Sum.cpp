Sol-1-Using O(n2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> v;
        
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if (nums[i]+nums[j] ==target){ 
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        
        return v;
    }
};

Sol-2-Using Maps T-O(n) S-O(n) 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map <int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(target - nums[i]) != mp.end())
                return {i,mp[target - nums[i]]};
            mp[nums[i]] = i;
        }
        return {};
    }
};
