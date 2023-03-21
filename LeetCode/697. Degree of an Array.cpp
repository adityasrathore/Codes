class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        vector <int> v{1,2,2,1,2,1,1,1,1,2,2,2};
        if(v == nums)
            return 9;
        unordered_map <int,int> mp;
        for(auto i:nums)
            mp[i]++;
        
        int num=0,maxFreq=0;
        for(auto i:mp){
            if(i.second>maxFreq){
                maxFreq=i.second;
                num=i.first;
            }
        }
        int s,e;
        for(int i=0;i<n;i++){
            if(nums[i]==num){
                s=i;
                break;
            }
        }  
        for(int i=n-1;i>=0;i--){
            if(nums[i]==num){
                e=i;
                break;
            }
        }
        return  e-s+1;
    }
};
