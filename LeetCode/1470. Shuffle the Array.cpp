class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> v;
        for(int i=0;i<n;i++){
            v.push_back(nums[i]);
            v.push_back(nums[i+n]);
        }
        return v;
    }
};
// Approach-2
// Time - O(n) Space - O(1)

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        for(int i=0;i<n;i++)
            nums[i+n]+=nums[i]*10000;
        for(int i=0;i<n;i++){
            nums[2*i]=nums[i+n]/10000;
            nums[2*i+1]=nums[i+n]%10000;
       }
        return nums;
    }
};
// Approach-3
// Time - O(n) Space - O(1)

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        for(int i=0;i<n;i++)
            nums[i+n]=(nums[i+n]<<10)|nums[i];
        for(int i=0;i<n;i++){
            nums[2*i]=nums[i+n]&1023;
            nums[2*i+1]=nums[i+n]>>10;
        }
        return nums;
    }
};
