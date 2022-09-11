class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map <int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        int maxfreq=-1,num;
        for(auto i=mp.begin();i!=mp.end();i++)
            if(i->second > maxfreq){
                maxfreq=i->second;
                num=i->first;
            }
        return num;
    }
};
