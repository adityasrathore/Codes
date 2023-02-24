class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue <int> maxh;
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]%2==1)
                nums[i]=2*nums[i];
            maxh.push(nums[i]);
            mini=min(nums[i],mini);
        }
        int diff=INT_MAX;

        while(maxh.top()%2==0){
            int max=maxh.top();
            maxh.pop();
            diff=min(diff,max-mini);
            mini=min(max/2,mini);
            maxh.push(max/2);
        }
        return min(diff,maxh.top()-mini);
    }
};
