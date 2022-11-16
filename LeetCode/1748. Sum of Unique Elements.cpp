class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int max=*max_element(nums.begin(),nums.end());
        int sum=0;
        vector <int> v(max+1,0);
        for(int i=0;i<n;i++)
            v[nums[i]]++;
        for(int i=0;i<max+1;i++)
            if(v[i]==1)
                sum += i*v[i];
        return sum;
    }
};
