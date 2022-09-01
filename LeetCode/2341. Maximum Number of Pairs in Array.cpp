class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector <int> v(2);
        unordered_map <int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        int pairs=0,gaps=0;
        for(auto i=mp.begin();i!=mp.end();i++)
            if(i->second%2==0)
                pairs+=(i->second/2);
            else{
                gaps+=i->second%2;
                pairs+=(i->second/2);
            } 
        v[0]=pairs;
        v[1]=gaps;
        return v;
    }
};
