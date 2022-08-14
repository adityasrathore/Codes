class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        int min=*min_element(nums.begin(),nums.end());
        int max=*max_element(nums.begin(),nums.end());
        int cmin=0,cmax=0;
        for(int i=0;i<n;i++){
            if(nums[i]==min)
                cmin++;
            if(nums[i]==max)
                cmax++;
        }
        int ans=n-cmin-cmax;
        if(ans>0)
            return ans;
        else
            return 0;
    }
};
