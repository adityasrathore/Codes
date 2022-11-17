class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set <int> s;
        for(auto i:nums)
            s.insert(i);
        vector <int> t;
        for(auto i:s)
            t.push_back(i);
         int n=t.size();
        if(n<=2)
            return t[n-1];
        return t[n-3];
    }
};
