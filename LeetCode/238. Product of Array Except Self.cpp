class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> l(n);
        vector<int> r(n);
        r[0] = nums[0];
        l[n-1] = nums[n-1];
        for(int i=1;i<n;i++)
            r[i] = r[i-1]*nums[i]; 
        
        for(int i=n-2;i>=0;i--)
            l[i] = l[i+1]*nums[i]; 

        vector<int> v(n);
        v[0] = l[1];
        v[n-1] = r[n-2];
        for(int i=1;i<n-1;i++)
            v[i] = l[i+1]*r[i-1];
        
        return v;
    }
};
// r  1   2   6  24
// l 24  24  12   4
