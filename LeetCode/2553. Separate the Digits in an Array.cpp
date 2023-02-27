class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector <int> v;
        int n=nums.size();
        int revNum;
        for(int i=0;i<n;i++){
            string s=to_string(nums[i]);
            int t=0;
            while(t<s.size()){
                v.push_back((int)s[t]-'0');
                t++;
            }
        }
        return v;
    }
};
