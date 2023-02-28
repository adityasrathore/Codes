class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        int num=0;
        for(int i=0;i<n/2;i++){
            string s1=to_string(nums[i]);
            string s2=to_string(nums[n-1-i]);
            s1+=s2;
            sum+=stoll(s1);
        }
        if(n%2==1)
            sum+=nums[n/2];
            
        return sum;
    }
};
