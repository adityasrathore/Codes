Using Sets

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> s(nums.begin(),nums.end());
        int setsize=s.size();
        int vectorsize=nums.size();
        return setsize<vectorsize ? true : false;
    }
};
Using Sorting

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i])
                count++;
        }
        return count>0 ? true : false;
    }
};

Using Maps
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int,int> mp;
        for(auto i:nums){
            mp[i]++;
            if(mp[i] > 1)
                return true;
        }
        return false;
    }
};
