class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        partial_sort(nums.begin(),nums.begin()+k,nums.end(),greater <int> ());
        return nums[k-1];
    }
};



class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue <int> mh;
        for(auto i:nums){
            mh.push(-i);
            if(mh.size() > k)
                mh.pop();
        }
        return mh.top()*-1;
    }
};


