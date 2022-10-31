class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        bool count[3][101]={};
        for(int i:nums1)
            count[0][i]=true;
        for(int i:nums2)
            count[1][i]=true;
        for(int i:nums3)
            count[2][i]=true;
        vector <int> v;
        for(int i=1;i<=100;i++){
            if(count[0][i]+count[1][i]+count[2][i]>1)
                v.push_back(i);
        }
        return v;
    }
};
