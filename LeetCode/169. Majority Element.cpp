class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,v=0;
        for(auto i:nums) {
            if(v==0)
                c=i;
            if(c==i)
                v++;
            else 
                v--;
        }
        return c;
    }
};
