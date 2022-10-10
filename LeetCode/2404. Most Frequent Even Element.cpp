class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map <int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
            if(nums[i]%2==0)
                mp[nums[i]]++; //Only taking the freq of Even Numbers
        
        int maxFreq=-1;
        for(auto i:mp)
            if(i.second>maxFreq)
                maxFreq=i.second; //Findinf the maximum Freq of the even Num
        
        int c=INT_MAX;
        for(auto i:mp)
            if(i.second==maxFreq) //Finding the Min number corresponding to maxFreq found
                c=min(i.first,c);
        
        return c==INT_MAX ? -1:c; 
    }
};
