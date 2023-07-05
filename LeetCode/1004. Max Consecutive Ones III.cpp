class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int j = 0;
        int len = 0;
    
        for(int i=0;i<n;i++){
            if(nums[i] == 0)
                k--;
            while(k<0){
                if(nums[j] == 0)
                    k++;
                j++;
            }
            len = max(len,i-j+1);
        }
        return len;
    }
};
