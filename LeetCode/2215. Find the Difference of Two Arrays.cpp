class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v1,v2;
        unordered_map <int,int> mp1,mp2;
        for(auto i:nums1){
            mp1[i]++;
        }
        for(auto i:nums2){
            mp2[i]++;
        }
        for(int i=0;i<nums1.size();i++){
            if(mp2[nums1[i]]>0)
                continue;
            v1.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            if(mp1[nums2[i]]>0)
                continue;
            v2.push_back(nums2[i]);
        }
        set <int> s;
        for(auto i:v1)
            s.insert(i);
        v1.clear();
        for(auto i:s)
            v1.push_back(i);
        s.clear();
        for(auto i:v2)
            s.insert(i);
        v2.clear();
        for(auto i:s)
            v2.push_back(i);
        vector<vector<int>> v;
        v.push_back(v1);
        v.push_back(v2);
        return v;
    }
};
