class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue <int> maxh(nums.begin(),nums.end());
        long long count=0;
        while(k--){
            long long temp=maxh.top();
            maxh.pop();
            count+=temp;
            maxh.push(ceil(temp/3.0));
        }
        return count;
    }
};
